#include <stdio.h>

int main() 
{
    int num[10], i, ascendente = 1, descendente = 1;
    
    printf("Ingrese 10 numeros distintos de 0:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &num[i]);
        
        if (num[i] == 0) 
        {
            printf("El numero ingresado no puede ser 0. Intente nuevamente.\n");
            i--;
            continue;
        }
        
        if (i > 0) 
        {
            if (num[i] > num[i - 1]) 
            {
                descendente = 0;
            }
            else if (num[i] < num[i - 1])   
            {
                ascendente = 0;
            }
        }
    }
    
    if (ascendente) 
    {
        printf("Los numeros fueron ingresados de forma ascendente.\n");
    }
    else if (descendente) 
    {
        printf("Los numeros fueron ingresados de forma descendente.\n");
    }
    else 
    {
        printf("Los numeros fueron ingresados de forma desordenada.\n");
    }
    
    printf("El primer numero ingresado es: %d\n", num[0]);
    printf("El ultimo numero ingresado es: %d\n", num[9]);
    
    return 0;
}