#include <stdio.h>
//KEVIN MARZUL JERONIMO ROJANO 
int main() {
    int cont, num, divisor;
    printf("Ingresa el numero del cual deseas conocer sus divisores: ");
    scanf("%d", &num);
    cont = num;
    while (cont > 0) {
        divisor = num % cont;
        if (divisor == 0) {
            printf("%d es un divisor de %d\n", cont, num);
        }
        cont = cont - 1;
    }
    return 0;
}
