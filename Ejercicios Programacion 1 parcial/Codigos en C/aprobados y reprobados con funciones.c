#include <stdio.h>
void llenarvector (float c[]){
    int i; 
    for (i=0;i<10;i++){
    printf("Dame la calificacion %d:", i);
    scanf("%f", &c[i]);
    }
}

float calcularpromedio (float c[]){
    int i;
    float suma=0,p;
    for (i=0;i<10;i++){   //EN C SE PONE HASTA 10 YA QUE EL PROGRAMA NO LLEGARA A 10, LLEGARA A 9 Y AHI SE DETENDRA 
        suma=suma+c[i];
    }
    p=suma/10;
    return p;
}

void nmayoresmenores (float c[],float p, int *nmay, int *nmen){
    int i;
    *nmay=0;
    *nmen=0;
    for (i=0;i<10;i++){
        if (c[i]>p)     
        {
            *nmay=*nmay+1;
        }else{
            *nmen=*nmen+1;
        }    
    }
}

int main () {
    float calif[10],prom;
    int nmayores,nmenores;
    llenarvector(calif);
    prom=calcularpromedio(calif);
    printf("El promedio general es: %.1f\n", prom);
    nmayoresmenores(calif, prom, &nmayores, &nmenores);
    printf("Mayores: %d\n", nmayores);
    printf("Menores: %d", nmenores);
    return 0;
}