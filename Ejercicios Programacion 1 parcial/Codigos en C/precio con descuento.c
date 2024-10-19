#include<stdio.h>
int main () {
    float precio, preciofin, des10, des15;
    printf("Ingrese el precio del articulo: ");
    scanf("%f", &precio);
    des10=precio*0.10;
    des15=precio*0.15;
    if (precio>200)
    {
        preciofin=precio-des15;
    }else{
        preciofin=precio-des10;
    }
    printf("El precio final es de: %.2f", preciofin);
    return 0;
}