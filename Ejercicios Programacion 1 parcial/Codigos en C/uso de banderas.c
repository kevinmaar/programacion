#include <stdio.h>
int main () {
    int n,contador,suma,termino,bandera;
    printf("ingresa el numero de terminos a sumar (N): ");
    scanf("%d", &n);
    bandera=0;
    contador=1;
    suma=0;
    termino=3;
    while (contador<=n)
    {
        contador=contador+1;
        suma=suma+termino;
        if (bandera==0)
        {
            termino=termino+4;
            bandera=1;
        }else
        {
            termino=termino+3;
            bandera=0;
        }       
    }
    printf("El resultado de la suma es: %d", suma);
   return 0; 
}