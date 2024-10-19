#include <stdio.h>
int main(){
    int dia, mes, año, diaact, mesact, añoact, años, meses, dias;
    printf("Ingresa tu fecha de nacimiento (DIA;MES;AÑO) (Despues de insertar cada valor presiona ENTER): \n");
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &año);
    printf("Ingresa la fecha actual (DIA;MES;AÑO) (Despues de insertar cada valor presiona ENTER): \n");
    scanf("%d", &diaact);
    scanf("%d", &mesact);
    scanf("%d", &añoact);
    años=añoact-año;
	meses=mesact-mes;
	dias=diaact-dia;
    if (dias<0)
    {
        meses=meses-1;
        dias=dias+30;
    }if (meses<0)
    {
        años=años-1;
        meses=meses+12;
    }
    printf("Tienes %d años, %d meses y %d días.", años, meses, dias);
    return 0;
}