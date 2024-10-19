#include <stdio.h>
//KEVIN MARZUL JERONIMO ROJANO
int main() {
    int mes, año, dias;
    printf("Ingrese el mes (1-12):");
    scanf("%d", &mes);
    printf("Ingrese el año:");
    scanf("%d", &año);
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        switch (mes) {
            case 1: dias = 31; break;
            case 2: dias = 29; break;
            case 3: dias = 31; break;
            case 4: dias = 30; break;
            case 5: dias = 31; break;
            case 6: dias = 30; break;
            case 7: dias = 31; break;
            case 8: dias = 31; break;
            case 9: dias = 30; break;
            case 10: dias = 31; break;
            case 11: dias = 30; break;
            case 12: dias = 31; break;
        }
    } else {
        switch (mes) {
            case 1: dias = 31; break;
            case 2: dias = 28; break;
            case 3: dias = 31; break;
            case 4: dias = 30; break;
            case 5: dias = 31; break;
            case 6: dias = 30; break;
            case 7: dias = 31; break;
            case 8: dias = 31; break;
            case 9: dias = 30; break;
            case 10: dias = 31; break;
            case 11: dias = 30; break;
            case 12: dias = 31; break;
        }
    }
    printf("El mes %d del año %d tiene %d días.", mes, año, dias);
    return 0;
}

