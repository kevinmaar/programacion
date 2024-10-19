#include <stdio.h>
//KEVIN MARZUL JERONIMO ROJANO
int main() {
    int cont, mayores, menores, edad;
    cont = 0;
    mayores = 0;
    menores = 0;
    printf("EN ESTE PROGRAMA SOLO SE PUEDEN INTRODUCIR 10 EDADES\n");
    while (cont < 10) {
        cont = cont + 1;
        printf("A continuaciOn ingresa la edad:(CADA QUE INTRODUZCAS UNA EDAD DEBES PULSAR ENTER PARA PODER INTRODUCIR LA SIGUIENTE)\n");
        scanf("%d", &edad);
        if (edad > 17) {
            mayores = mayores + 1;
        } else {
            menores = menores + 1;
        }
    }
    mayores = mayores * 10;
    menores = menores * 10;
    printf("De las edades proporcionadas el %d%% son mayores de edad, y el otro %d%% son menores de edad.\n", mayores, menores);
    return 0;
}

