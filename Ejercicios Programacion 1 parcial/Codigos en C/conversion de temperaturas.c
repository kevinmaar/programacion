#include <stdio.h>
int main () {
    int opcion, c, f, resultado;
    printf("Selecciona la opcion que deseas realizar: (Recuerda solo meter numeros enteros)\n");
    printf("Celsius a Kelvin----------1\n");
    printf("Fahrenheit a Celsius------2\n");
    printf("Fahrenheit a Kelvin-------3\n");
    printf("Escribe tu respuesta---------------------------------:");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        printf("Ingresa los grados Celsius que deseas convertir a Kelvin: ");
        scanf("%d", &c);
        resultado=(c+273.15);
        printf("El resultado de %d grados Celsius es %d grados Kelvin",c , resultado);
        break;
    case 2:
        printf("Ingresa los grados Fahrenheit que deseas convertir a grados Celsius: ");
        scanf("%d", &f);
        resultado=((f - 32) * (5 / 9));
        printf("El resultado de %d grados Celsius es %d grados Kelvin",f , resultado);
        break;
    case 3:
        printf("Ingresa los grados Fahrenheit que deseas convertir a grados Kelvin: ");
        scanf("%d", &f);
        resultado=(f - 32) * 5 / 9 + 273.15;        
        printf("El resultado de %d grados Celsius es %d grados Kelvin",f , resultado);
        break;
    default:
        printf("Intentalo de nuevo, ese valor no es valido");
        break;
    }
    return 0;
}