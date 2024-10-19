#include <stdio.h>
int main() {
    int segs,horas,min,seg;
    printf("PULSA ENTER DESPUES DE INTRODUCIR CADA VALOR");
    printf("Ingresa la cantidad de horas de la cual deseas conocer de la siguiente forma (HORAS:MINUTOS:SEGUNDOS)\n");
    scanf("%d", &horas);
    scanf("%d", &min);
    scanf("%d", &seg);
    horas=horas*3600;
	min=(min)*60;
	segs=horas+min+seg;
    printf("%d segundos", segs);
    return 0;
}