#include <stdio.h>
//KEVIN MARZUL JERONIMO ROJANO
int main() {
    int numer, digito,pr;
    printf("Ingresa un número: ");
    scanf("%d", &numer);
    while (numer > 0) {
        digito = numer % 10;
        pr=digito%2;
        if (pr==0)
        {
            printf("%d es par\n", digito);
            numer=numer/10;
        }else
        {
            printf("%d\n", digito);
             numer=numer/10;
        }
    }
    return 0;
}
