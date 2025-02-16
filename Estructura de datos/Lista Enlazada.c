#include <stdio.h>

typedef struct {
    int apuntador;
    int valor;
}definir;

void llenar_inicio(definir lista[20], int *indice);
void llenar_final(definir lista[20], int *indice);
void eliminar(definir lista[20], int *indice);
void buscar(definir lista[20], int *indice);
void mostrar(definir lista[20], int *indice);


int main(){
    int indice=-1;
    definir lista[20];
    int band=0;
    while (band==0)
    {
        int opc;
        printf("\n1. Insertar al inicio\n");
        printf("2. Insertar al final\n");
        printf("3. Eliminar un valor\n");
        printf("4. Buscar un valor\n");
        printf("5. mostrar lista\n");
        printf(">>");
        scanf("%d", &opc);
        switch (opc)
        {
            case 1:
            llenar_inicio(lista, &indice);
            break;
            case 2:
            llenar_final(lista, &indice);
            break;
            case 3:
            eliminar(lista, &indice);
            break;
            case 4:
            buscar(lista, &indice);
            break;
            case 5:
            mostrar(lista, &indice);
            break;
            default:
            band=1;
            break;
        }
    }
    
    return 0;
}

void llenar_final(definir lista[20], int *indice){ 
    if (*indice==20)
    {
        printf("\nLa lista esta llena\n\n\n"); //Pasamos un puntero al indice para corroborar que la lista este llena y no agregar de mas.
    }else
    {
        printf("\nIngresa el nuevo valor >>");  //en caso de no estar llena la pila, agregamos un nuevo valor al final de la pila y actua-
        scanf("%d", &lista[(*indice)+1].valor); //lizamos nuestro indice para saber que algo nuevo ha sido agregado
        printf("\nValor agregado con exito\n");
        *indice=*indice+1;
        lista[*indice].apuntador=(*indice)+1;
    }
}

void llenar_inicio(definir lista[20], int *indice){
    if (*indice==20)
    {
        printf("\nLa lista esta llena\n\n\n");
    }else
    { 
        for (int i = *indice+1; i>0; i--)    // En este agregar primero hacemos un recorrido hacia la deredcha de todos nuestros valores 
        {                                    // esto hara que podamos agreagar un nuevo valor al inicio y obviamente nuestro valor al final
            lista[i].valor=lista[i-1].valor; // se perdera (Esto solo pasa si la pila esta llena), de lo contrario el valor si se encontraba
        }                                    // en la posicion 15 pasara a la 16 y asi consecutivamente.
        printf("\nIngresa el nuevo valor: ");
        scanf("%d", &lista[0].valor);
        if (*indice==-1)
        {
            lista[(*indice)+1].apuntador=lista[(*indice)].apuntador;
        }else
        {
            lista[(*indice)+1].apuntador=(lista[(*indice)].apuntador)+1;
        }
        printf("\nValor agregado con exito\n");
        if (*indice<20)
        {
            *indice=*indice+1;
        }
    }
        
}


void buscar(definir lista[20], int *indice){
    int val, band=0;
    printf("\nIngresa el valor que deseas buscar: "); //Esta funcion buscar se apoya de la direccion a la que apunta cada dato, por lo que al final
    scanf("%d", &val);                                // se agregra un i=lisat[i].apuntador, ya que cada direccion apunta a la siguiente, por lo que
    int i = 0;                                        // de esta manera se puede recorrer toda nuestra "lista", si llegamos a encontrar el dato acti-
    while (i < *indice+1) {                           // vamos una bandera con la cual sabremos si se encontro o no el dato.
        if (lista[i].valor == val) {
            printf("\nEl valor %d fue encontrado en la posicion --> %d", val, i);
            band = 1;

        }
        i = lista[i].apuntador;
    }
    if (band==0)
    {
        printf("\nEl valor %d no se encontro en la lista", val);
    }
}

void mostrar(definir lista[20], int *indice){
    if (*indice<0)
    {
        printf("\nLa lista se encuentra vacia\n");
    }else                                               //Aqui hacemos lo mismo que en el buscar, nos apoyamos de la direccion a la que apunta cada
    {                                                   // dato, de esta forma mostramos toda la lista.
        int i=0;
        while (i<*indice+1)
        {
            printf("\nposicion %3d --> %4d apuntando a la direccion %4d", i, lista[i].valor, lista[i].apuntador);
            i=lista[i].apuntador;
        }
    } 
}


void eliminar(definir lista[20], int *indice){
    if (*indice<0)                                                        //la funcion eliminar lo que hace basicamente es hacer un recorrido de los
    {                                                                     // valores de izquierda a derecha, y al final restamos uno a nuestro indice
        printf("\nLa lista esta vacia, no puedes eliminar nada\n");       // al recorrer todos los datos de derecha a izquiera se borra el valor 
    }else                                                                 // y el ultima de la lista se duplica pero esto no nos importa ya que al 
    {                                                                     // modificar nuestro indice no accederemos a esa posicion por lo que no 
        int opc;                                                          // hay inconvenientes.
        printf("\nIngresa la posicion que deseas borrar de 0 a 20 --> ");
        scanf("%d", &opc);
        for (int i = opc; i < *indice; i++)
        {
            lista[i].valor=lista[i+1].valor;
        }
        *indice=*indice-1;
        printf("\nEl numero %d ha sido eliminado con exito\n", lista[20].valor);    
    }
}