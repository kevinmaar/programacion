#include <stdio.h>
int main(){
    int edad,dias,años,meses;
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    años=edad;
	meses=12*edad;
	dias=365*edad;
    printf("Tienes %d anos, lo cual es igual a %d meses o bien son %d dias", años, meses, dias);
    return 0;
}