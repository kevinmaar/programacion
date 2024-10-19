#include <stdio.h>
#include <math.h>
int main () {
    int c1,c2,c3,prom;
    printf("Dame la calificacion 1: ");
    scanf("%d", &c1);
    printf("Dame la calificacion 2: ");
    scanf("%d", &c2);
    printf("Dame la calificacion 3: ");
    scanf("%d", &c3);
    prom=round((c1+c2+c3)/3);
   switch (prom)
    {
   case 10:
    printf("Es tu obligacion");
    break;
   case 9:
    printf("Muy bien pero todavia puedes mejorar");
    break;
   case 8:
    printf("Vas muy bien pero puedes ir mejor"); 
    break;
   default:
    printf("Tienes que estudiar mas o reprobaras"); 
   }
   return 0;
}