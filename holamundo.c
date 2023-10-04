#include <stdio.h>

int main(void)
{
    int numeroprimero;
    int contador = 0;
    int opcion;
    printf("Bienvenido al programa de calculo de numeros primos.\n");
    do
    {

        printf("Ingrese un numero para comprobrar si es primo o no.\n");
        scanf("%d", &numeroprimero);

        for (int i = 1; i <= numeroprimero; i++)
        {
            if (numeroprimero % i == 0)
            {
                contador++;
            }
        }
        if (contador > 2)
        {
            printf("El numero %d no es primo.\n", numeroprimero);
        }
        else
        {
            printf("El numero %d es primo.\n", numeroprimero);
        }
        printf("Desea volver a calcular un numero? Escriba 1 para volver a calcular y cualquier otro numero para salir del programa.\n");
        scanf("%d", &opcion);
        if (opcion == 1)
        {
            contador = 0;
        }

    } while (opcion == 1);
    return 0;
}