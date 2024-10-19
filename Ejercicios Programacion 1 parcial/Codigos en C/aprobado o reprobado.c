#include <stdio.h>
int main (){
    float calif1, calif2, calif3, prom;
    printf("Dame la calificacion 1: ");
    scanf("%f", &calif1);
    printf("Dame la calificacion 2: ");
    scanf("%f", &calif2);
    printf("Dame la calificacion 3: ");
    scanf("%f", &calif3);
    prom=((calif1+calif2+calif3)/3);
    if (prom>=6)
    {
        printf("Aprobado!!!");
    }else
    {
        printf("Reprobado");
    }
    return 0;
}