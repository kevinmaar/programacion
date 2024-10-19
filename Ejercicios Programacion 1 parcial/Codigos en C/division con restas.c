#include <stdio.h>
int main () {
    int num1, num2, contador;
    printf("Ingresa el numero que deseas dividir: ");
    scanf("%d", &num1);
    printf("¿Entre cuanto lo deseas dividir? ");
    scanf("%d", &num2);
    contador=0;
    while (num1>=num2)
    {
        num1=num1-num2;
        contador=contador+1;
    }
    printf("El resultado es %d \n", contador);
    printf("El cociente es %d \n", num1);
    return 0;
}