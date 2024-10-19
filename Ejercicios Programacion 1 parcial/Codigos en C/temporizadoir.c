#include <stdio.h>
int main () {
int hor, min, seg;
printf("Introduce las horas: ");
scanf("%d", &hor);
printf("Introduce los minutos: ");
scanf("%d", &min);
printf("Introduce los segundos: ");
scanf("%d", &seg);
while (seg>0 || min>0 || hor>0){
    printf("%d : %d : %d \n", hor, min, seg);
    seg=seg-1;
    if (seg<0){
        min=min-1;
        seg=59;
    }if (min<0){
        hor=hor-1;
        min=59;
    }   
}
return 0;
}

