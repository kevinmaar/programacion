#include <stdio.h>

void agregar(int arbol[1024], int *indice);
void buscar(int arbol[1024], int *indice);
void recorrido(int arbol[1024], int *indice);

int main(){
    int arbol[1024], band = 0, indice=-1;
    while (band==0)
    {
        int opc;
        printf("\n1.--> Insertar\n");
        printf("\n2.--> Buscar\n");
        printf("\n3.--> Recorrido (in-order traversal)\n");
        printf("\n----> Cualquier otro para salir\n");
        scanf("%d", &opc);
        switch (opc)
        {
            case 1:
            agregar(arbol, &indice);
            break;
            case 2:
            buscar(arbol, &indice);
            break;
            case 3:
            recorrido(arbol, &indice);
            break;
            default:
            band=1;
            break;
        }
    }
    return 0;
}   

void agregar(int arbol[1024], int *indice){
    if (*indice<=1024)
    {
        int val;
        printf("\nIngresa el valor a agregar >> ");
        scanf("%d", &val);
        *indice = *indice + 1;                 // la funcion agregar basicamente agrega al arbol de izquiera a derecha
        arbol[*indice]=val;                    // y aumenta el tamaño logico de indice para al momento de recorrer el arbol     
        printf("!VALOR AGREGADO CON EXITO¡");  // hacerlo de una manera mas eficiente, ademas de que esta funcion tambien ve-
    }else                                      // rifica que el arbol no se encuentre lleno
    {
        printf("\nEl arbol se encuentra lleno");
    }   
}

void buscar(int arbol[1024], int *indice){
    int val, i = 0, band = 0;
    printf("\nIngresa el valor a buscar >> ");
    scanf("%d", &val);

    while (i <= *indice)        //entramos al ciclo while para buscar nuestro valor en el arbol de izquierda a derecha,
    {                           // comenzando desde el nodo raiz hasta llegar a los hijos
        if (arbol[i] == val)
        {
            int pote = 1;       // una vez encontrado el valor debemos saber en que nivel del arbol esta, por lo que
            int nivel = 0;      // a traves de las potencias sabremos, cuando la potencia sea mayor a igual que nues-
            while (pote <= i)   //tro indice "i" es porque en ese nivel se encuentra el valor
            {
                pote = pote * 2;  // Calculamos el nivel usando potencias de 2 y aumentando el nivel cada ves
                nivel++;          // que aumentamos una potencia
            }

            printf("\nEl valor %d fue encontrado en el nivel %d\n", val, nivel);
            band = 1;
        }
        i++;
    }
                                //en caso de no encontrar el valor y por lo tanto no haber modificado la bandera
    if (band == 0)              // el programa nos dira que no se logro encontrar el valor
    {
        printf("\nEl valor no se encontró dentro del árbol\n");
    }   
}

void recorrido(int arbol[1024], int *indice){
    printf("\nFuncion en desarrollo, %d,  %d", arbol[0],*indice);
}
