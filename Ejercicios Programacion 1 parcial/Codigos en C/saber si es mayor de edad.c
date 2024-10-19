#include <stdio.h>
int main () {
    int añonaci, añoact, edad;
    printf("Ingresa tu año de nacimiento:");
    scanf("%d", &añonaci);
    printf("Ingresa el año actual: ");
    scanf("%d", &añoact);
    edad=(añoact-añonaci);
    if (edad>=18)
    {
        printf("Usted tiene: %d años, es mayor de edad!!!", edad);
    }
    return 0;
}