#include <stdio.h>
int main () {
    int num;
    printf("Ingresa que numero es el mes del cual deseas conocer cuantos dias tiene: ");
    scanf("%d", &num);
    if (num>12){
        printf("Eso no es posible, verifica tu dato e intentalo de nuevo");
    }else
    {
        switch (num)
        {
        case 1:
            printf("El mes de enero cuenta con 31 dias");
            break;
        case 2:
            printf("El mes de febrero cuenta con 28 dias");
            break;
        case 3:
            printf("El mes de marzo cuenta con 31 dias");
            break;
        case 4:
            printf("El mes de abril cuenta con 30 dias");
            break;
        case 5:
            printf("El mes de mayo cuenta con 31 dias");
            break;
        case 6:
            printf("EEl mes de junio cuenta con 30 dias");
            break;
        case 7:
            printf("El mes de julio cuenta con 31 dias");
            break;
        case 8:
            printf("El mes de agosto cuenta con 31 dias");
            break;
        case 9:
            printf("El mes de septiembre cuenta con 30 dias");
            break;
        case 10:
            printf("EEl mes de octubre cuenta con 31 dias");
            break;
        case 11:
            printf("El mes de noviembre cuenta con 30 dias");
            break;
        case 12:
            printf("EEl mes de diciembre cuenta con 31 dias");
            break;
        default:
            printf("Eso no es posible, verifica tu dato e intentalo de nuevo");
            break;
        }
    }
    return 0;
}