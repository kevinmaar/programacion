#include <stdio.h>
#include <math.h>
int main () {
    float aux, areatotal, lado1, lado2, lado3;
    printf("Dame el lado 1: ");
    scanf("%f", &lado1);
    printf("Dame el lado 2: ");
    scanf("%f", &lado2);
    printf("Dame el lado 3: ");
    scanf("%f", &lado3);
    aux = (lado1 + lado2 + lado3) / 2;
    areatotal = sqrt(aux * (aux - lado1) * (aux - lado2) * (aux - lado3));
    printf("El area de este triangulo es de: %f\n", areatotal);
    return 0;
}