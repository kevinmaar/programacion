#include <stdio.h>      
int main () {
    int num, suma, contador;
    printf("Ingresa el valor del cual deseas conocer su tabla de multiplicar: ");
    scanf("%d", &num);
    contador=0;
    suma=0;
    while (contador<10)
    {
        suma=suma+num;
        contador=contador+1;
        printf("%d x %d = %d \n", num, contador, suma);
    }
    return 0;
}