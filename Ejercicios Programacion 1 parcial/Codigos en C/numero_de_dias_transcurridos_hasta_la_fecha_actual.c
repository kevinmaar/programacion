#include <stdio.h>
// KEVIN MARZUL JERONIMO ROJANO
// Este programa funciona bajo la suposición de que los meses tienen 30 días 
int main() {
    int dia, mes, año, diaact, mesact, añoact, cont;
    printf("Ingresa tu año de nacimiento: ");
    scanf("%d", &año);
    printf("Ingresa tu mes de nacimiento: ");
    scanf("%d", &mes);
    printf("Ingresa tu dia de nacimiento: ");
    scanf("%d", &dia);
    printf("Ingresa el año actual: ");
    scanf("%d", &añoact);
    printf("Ingresa el mes actual: ");
    scanf("%d", &mesact);
    printf("Ingresa el dia actual: ");
    scanf("%d", &diaact);
    cont = 0;
    cont = cont + ((añoact - año - 1) * 360);
    cont = cont + ((12 - mes) * 30) + (30 - dia);
    cont = cont + ((mesact - 1) * 30) + diaact;
    printf("Días transcurridos: %d\n", cont);
    return 0;
}
