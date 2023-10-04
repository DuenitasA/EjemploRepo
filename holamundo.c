#include <stdio.h>

int main(void){

    int opcion;

    printf("Hola querido mundo de programadores.\n");

    do
    {
        printf("Escriba 1 para seguir en este bucle y cualquier otro numero para salir del bucle.\n");
        scanf(&opcion);
    } while (opcion== 1);
    for (int i = 0; i <= 10; i++)
    {
       printf("Este es el numero %d\n", i);
    }
    
    return 0;
}