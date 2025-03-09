#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void copiar_ejecutables();
int evaluar_bandera(char *argv[]);

int main(int argc, char *argv[]){
    copiar_ejecutables();
    if (argc<2)
    {
        printf("\nNo se ingreso alguna bandera\n");
    }else
    {
        if (evaluar_bandera(argv)==10)
        {
            printf("\nEsa no es una bandera valida, intentalo de nuevo!\n");
        }else
        {
            switch (evaluar_bandera(argv))
            {
            case 1:
                system("/tmp/ejecutables/arbol");
                break;
            case 2:
                system("/tmp/ejecutables/lista");
                break;
            case 3:
                system("/tmp/ejecutables/pila");
                break;
            case 4:
                system("/tmp/ejecutables/cola");
                break;
            }
        }
    }
    system("rm -rf /tmp/ejecutables");
    return 0;
}

int evaluar_bandera(char *argv[]){
    int opcion=10;
        if (strcmp(argv[1], "-a") == 0|| strcmp(argv[1], "-arbol")==0)
        {
            opcion=1;
        }
        if (strcmp(argv[1], "-l") == 0|| strcmp(argv[1], "-lista")==0)
        {
            opcion=2;
        }
        if (strcmp(argv[1], "-p") == 0|| strcmp(argv[1], "-pila")==0)
        {
            opcion=3;
        }
        if (strcmp(argv[1], "-c") == 0 || strcmp(argv[1], "-cola")==0)
        {
            opcion=4;
        }
    return opcion;
}

void copiar_ejecutables() {
    system("mkdir -p /tmp/ejecutables");
    system("cp arbol /tmp/ejecutables/");
    system("cp lista /tmp/ejecutables/");                       
    system("cp pila /tmp/ejecutables/");
    system("cp cola /tmp/ejecutables/");
    system("chmod +x /tmp/ejecutables/*");
}
