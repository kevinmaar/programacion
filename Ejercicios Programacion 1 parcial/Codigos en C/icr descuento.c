#include<stdio.h>
int main () {
    float sueldo, horas, descuento, sueldofin;
    printf("Ingresa cuantas horas trabajaste: ");
    scanf("%f", &horas);
    printf("Ingresa el precio que te pagan por hora: ");
    scanf("%f", &sueldo);
    sueldo=horas*sueldo;
    descuento=sueldo*0.10;
    sueldofin=sueldo-descuento;
    if (sueldo>8000)
    {
        printf("El sueldo bruto es de %.2f\n", sueldo);
        printf("El descuento aplicado es de %.2f\n", descuento);
        printf("El suedlo final es de %.2f\n", sueldofin);
    }else
    {
        printf("El sueldo final es de %.2f", sueldo);
    }
    return 0;  
}