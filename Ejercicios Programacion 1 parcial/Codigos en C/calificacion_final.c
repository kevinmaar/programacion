#include <stdio.h>
int main () {
    float calif1, calif2, calif_final;
    printf("Dame la calificacion del primer parcial: ");
    scanf("%f", &calif1);
    if (calif1>=6)
    {
        printf("Dame la calificacion del segundo parcial: ");
        scanf("%f", &calif2);
        if (calif2>=6)
        {
            calif_final=(calif1+calif2)/2;
        }
        else{
            calif_final=calif2;
        }
        }
    else
    {
        calif_final=calif1;
    }
    printf("La calificacion final es: %.1f", calif_final);
    return 0;
}
