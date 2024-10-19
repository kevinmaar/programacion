#include <stdio.h>
int main () {
    int hora1,min1,seg1,hora,minuto,segund;
    printf("Ingresa la hora actual en el formato de 24 horas \n ");
    scanf("%d", &hora1);
    printf("Ingresa el minuto actual \n ");
    scanf("%d", &min1);
    printf("Ingresa el segundo actual \n ");
    scanf("%d", &seg1);
    if (seg1==0)
    {
        seg1=60;
    }if (min1==0)
    {
        min1=60;
		hora=24-hora1;
		minuto=60-min1;
		segund=60-seg1;
        printf("Faltan %d horas con %d minutos y %d segundos para que termine el dia", hora, minuto, segund);
    }else
    {
        if (hora1>11)
        {
            hora=23-hora1;
			minuto=60-min1;
			segund=60-seg1;
            printf("Faltan %d horas con %d minutos y %d segundos para que termine el dia", hora, minuto, segund);
        }else
        {
            hora=24-hora1;
			minuto=60-min1;
			segund=60-seg1;
            printf("Faltan %d horas con %d minutos y %d segundos para que termine el dia", hora, minuto, segund);
        }
    }
    return 0;
}