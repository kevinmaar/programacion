#include <stdio.h>

void push(int pila[100], int *apuntador);
void pop(int pila[100], int *apuntador);
void mostrar(int pila[100], int *apuntador);
void peek(int pila[100], int *apuntador);

int main(){
    int band=0, pila[100], apuntador=-1;
    while (band==0)
    {
        int opc=0;
        printf("\n1 --> Push \n");
        printf("2 --> Pop \n");
        printf("3 --> Mostrar pila \n");
        printf("4 --> Mostrar elemento en la cima \n");
        printf("5 --> Verificar si la pila esta vacia \n");
        printf("Cualquier otro numero para salir \n");
        printf(">");
        scanf("%d", &opc);
        switch (opc)
        {
            case 1:
            push(pila, &apuntador);
            break;
            case 2:
            pop(pila, &apuntador);
            break;
            case 3:
            mostrar(pila, &apuntador);
            break;
            case 4:
            peek(pila, &apuntador);
            break;
            case 5:
            if (apuntador!=-1)
            {
                printf("\nLa pila si tiene contenido\n");
            }else
            {
                printf("\nLa pila esta vacia\n");
            }
            break;
            default:
            band=1;
            break;
        }
        
    }
    return 0;
}

void push(int pila[100], int *apuntador){
    if (*apuntador==100)
    {                                           
        printf("\nLa pila esta llena\n");
    }else                                       // la funcion push agrega un nuevo valor a la pila, pero primero hacemos una comprobacion de que la pila
    {                                           // no se encuentre llena, despues de eso aumentamos el tamaño del *apuntador , el apuntador lo podemos 
        int valor;                              // ver como un tamaño logico, para recorrer nuestro arreglo de manera mas eficiente.
        printf("\nIngresa el valor -->");
        scanf("%d", &valor);
        *apuntador=*apuntador+1;
        pila[*apuntador]=valor;
        printf("\nValor agregado con exito\n");
    }
}

void pop(int pila[100], int *apuntador){
    if (*apuntador!=-1)
    {
        printf("\nEl valor %d ha sido sacado de la pila\n", pila[*apuntador]);
        *apuntador=*apuntador-1;          // el pop hace de igual manera hace una verificacion de que la pila no este vacia, en caso de que si tenga 
    }else                                 // contenido vamosa  retirar el ultimo valor que metimos a la pila, y esto lo hacemos unicamente reduciendo
    {                                     // tamaño de nuestro apuntador.
        printf("\nLa pila esta vacia\n");
    }
}

void mostrar(int pila[100], int *apuntador){
    if (*apuntador==-1)
    {
        printf("\nLa pila esta vacia, no hay que mostrar\n"); // mostrar pila funciona de la misma manera que mostrariamos un vector, recorrido desde
    }else                                                     // el ultimo hasta el primer valor
    {
        for (int i = *apuntador; i >= 0; i--)
        {
            printf("\nposicion %3d --> %d\n", i, pila[i]);
        }
    }
}

void peek(int pila[100], int *apuntador){
    if (*apuntador!=-1)                                                 //peek nos da el lelemtno en la cima, basicamente nos muestra el elemento 
    {                                                                   // al que nuestro apuntador esta apuntando, no tiene mas ciencia.
        printf("\nEl elemento en la cima es %d\n", pila[*apuntador]);
    }else
    {
        printf("\nLa pila esta vacia\n");
    }
    
    
}