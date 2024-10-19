#include <stdio.h>
//KEVIN MARZUL JERONIMO ROJANO
int main() {
    int numer, suma = 0, digito;
    printf("Ingrese un numero: ");
    scanf("%d", &numer);
    while (numer > 0) {
        digito = numer % 10;
        suma = suma + digito;
        numer = numer - digito;
        numer = numer / 10;
    }
    while (suma >= 10) {
        numer = suma;
        suma = 0;
        while (numer > 0) {
            digito = numer % 10;
            suma = suma + digito;
            numer = numer - digito;
            numer = numer / 10;
        }
    }
    printf("La raiz digital es: %d\n", suma);
    return 0;
}
