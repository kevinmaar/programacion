#include <stdio.h>
//KEVIN MARZUL JERONIMO ROJANO
int main() {
    int num1, num2, num3;
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingresa el tercer numero: ");
    scanf("%d", &num3);
    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d es el mayor\n", num1);
        }
    } else {
        if (num1 > num3) {
            if (num1 > num2) {
                printf("%d es el mayor\n", num1);
            }
        }
    }
    if (num2 > num3) {
        if (num2 > num1) {
            printf("%d es el mayor\n", num2);
        }
    } else {
        if (num2 > num1) {
            if (num2 > num3) {
                printf("%d es el mayor\n", num2);
            }
        }
    }
    if (num3 > num2) {
        if (num3 > num1) {
            printf("%d es el mayor\n", num3);
        }
    } else {
        if (num3 > num1) {
            if (num3 > num2) {
                printf("%d es el mayor\n", num2);
            }
        }
    }
    return 0;
}
