#include <stdio.h>

int main(void){

    int numeroprimero;
    int contador =0 ;
    printf("Ingrese un numero para comprobrar si es primo o no.\n");
    scanf("%d", &numeroprimero);

    for (int i = 1; i <= numeroprimero; i++)
    {
        if (numeroprimero % i == 0)
        {
            contador ++;
        }
        
    }
    if (contador >2  )
    {
        printf("El numero %d no es primo.\n", numeroprimero);

    }else{
        printf("El numero %d es primo.\n", numeroprimero);

    }
    
    

    return 0;
}