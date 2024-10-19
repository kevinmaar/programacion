#include <stdio.h>
int main() {
    int lado1, lado2, preciom2, area, total;
    printf("Dame el largo del terreno en metros: ");
    scanf("%d", &lado1);
    printf("Dame el ancho del terreno en metros: ");
    scanf("%d", &lado2);
    printf("Dame el precio del metro cuadrado: ");
    scanf("%d", &preciom2);
    area = lado1 * lado2;
    total = area * preciom2;
    printf("El precio por este terreno es de: $%d", total);
    return 0;
}