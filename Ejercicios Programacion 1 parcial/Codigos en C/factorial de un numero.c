#include <stdio.h>
int main () {
    int num, fact, contador;
    printf("Inserta el numero del caual deseas conocer su factorial:");
    scanf("%d", &num);
    contador=1;
    fact=1;
    if (num<0)
    {
        printf("eso es imposible");
    }else
    {
        while (contador<num)
    {
        contador=contador+1;
        fact=fact*contador;
    }
    printf("El factorial de %d es %d", num, fact);
    }
    return 0;
}