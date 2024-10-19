#include <stdio.h>
int main() {
    int resultado, anterior, actual, repeticiones,cont;
    printf("Ingresa el numero de veces que deseas repertir las serie de Fibonacci: ");
    scanf("%d", &repeticiones);
    anterior=0;
    actual=1;
    cont=2;
    while (cont<repeticiones)
    {
        cont=cont+1;
        resultado=anterior+actual;
        anterior=actual;
        actual=resultado;
        printf("%d. ----> %d \n", cont, actual);
    }
    return 0;
}