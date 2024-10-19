#include <stdio.h>
int main () {
    int añoact, añonac, edad;
    printf("ingresa tu año de nacimiento: ");
    scanf("%d", &añonac);
    printf("ingresa el año actual");
    scanf("%d", &añoact);
    edad=(añoact-añonac);
    printf("Tienes %d años", edad);
    return 0;
}