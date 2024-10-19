#include <stdio.h>
//KEVIN MARZUL JERONIMO ROJANO
int main() {
    int num;
    printf("Ingresa un numero del 1 al 10 para saber su equivalente en romano: ");
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("I\n");
            break;
        case 2:
            printf("II\n");
            break;
        case 3:
            printf("III\n");
            break;
        case 4:
            printf("IV\n");
            break;
        case 5:
            printf("V\n");
            break;
        case 6:
            printf("VI\n");
            break;
        case 7:
            printf("VII\n");
            break;
        case 8:
            printf("VIII\n");
            break;
        case 9:
            printf("IX\n");
            break;
        case 10:
            printf("X\n");
            break;
        default:
            printf("Ese numero no se encuentra dentro del rango de 1 a 10\n");
    }
    return 0;
}
