#include <stdio.h>
int main () {
    int num, tabla, contador;
    printf("Dame el numero del cual deaseas obgtener la tabla de multiplicar: ");
    scanf("%d", &num);
    contador=0;
    while (contador<11)
    {
        tabla=num*contador;
        printf("%d x %d = %d \n", num, contador, tabla);
        contador=contador+1;
    }
    return 0;
}