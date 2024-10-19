#include <stdio.h>
int main() {
    int cont,repe,res;
    printf("A continuacion te presentamos la suma de los primeros 50 numeros naturales:\n");
    cont = 0;
    repe = 0;
    res = 0;
    while (repe < 50) {
        repe = repe + 1;
        cont = cont + 1;
        res = res + cont;
        printf("%d. %d\n", repe, res);
    }
    printf("El resultado de sumar los 50 primeros numeros naturales es: %d\n", res);
    return 0;
}