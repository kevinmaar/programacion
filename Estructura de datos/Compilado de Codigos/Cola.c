#include <stdio.h>

void encolar(int cola[20],int *apuntador);
void desencolar(int cola[20],int *apuntador);
void verif(int *apuntador);

int main(){
    int band=0,cola[20], apuntador=-1;
    while (band==0)
    {
        int opc;
        printf("\nSelecciona una de las siguientes opciones: \n");
        printf("\n1.--> Encolar");
        printf("\n2.--> Desencolar");
        printf("\n3.--> Verificar estado de la cola");
        printf("\n      Cualquier otro para salir\n");
        printf("\napuntador = %d \n", apuntador);
        printf("\n>>>>>");
        scanf("%d", &opc);
        switch (opc)
        {
            case 1:
            encolar(cola, &apuntador);
            break;
            case 2:
            desencolar(cola, &apuntador);
            break;
            case 3:
            verif(&apuntador);
            break;
            
            default:
            band=1;
            break;
        }
    }
    
    return 0;
}

void encolar(int cola[20],int *apuntador){
    if (*apuntador==20)
    {
        printf("\nLa cola se encuentra llena");
    }else
    {
        *apuntador=*apuntador+1;
        printf("\nIngresa el valor >> ");
        scanf("%d", &cola[*apuntador]);
        printf("\n<< VALOR AGREGADO CON EXITO >>\n");
    }
}


void    desencolar(int cola[20],int *apuntador){
    if (*apuntador==-1)
    {
        printf("\nLa cola se encuentra vacia\n");
    }else
    {
        printf("\n El valor %d ha sido extraido\n", cola[0]);
        for (int i = 0; i < *apuntador; i++)
        {
            cola[i]=cola[i+1];
        }
        *apuntador=*apuntador-1;
    }
}


void verif(int *apuntador){
    if (*apuntador==-1)
    {
        printf("\nLa cola se encuentra vacia\n");
    }else
    {
        printf("\nLa cola si tiene contenido\n");
    }
}

