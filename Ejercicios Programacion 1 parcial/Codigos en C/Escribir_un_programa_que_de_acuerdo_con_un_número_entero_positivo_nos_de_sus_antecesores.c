#include <stdio.h>
//KEVIN MARZUL JERONIMO ROJANO
int main() {
    int n, i, j;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("El número debe ser positivo.\n");
    } else {
        i = n;
        while (i > 0) {
            j = 1;
            while (j <= i) {
                printf("%d", j);
                j++;
            }
            printf("\n");
            i--;
        }
    }
    return 0;
}

