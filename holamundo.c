#include <stdio.h>

int main(void){

    int opcion;

    printf("Hola querido mundo de programadores.\n");

    do
    {
        printf("Escriba 1 para seguir en este bucle y cualquier otro numero para salir del bucle.\n");
        scanf("%d", &opcion);
    } while (opcion== 1);
    for (int i = 0; i <= 10; i++)
    {
       printf("Numero %d\n", i);
    }
    
    return 0;
}