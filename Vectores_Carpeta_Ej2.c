#include <stdio.h>

int main() 
{
    int num[5] = {0}, i, mayor;
    float prom = 0;
    for(i = 0; i < 5; i++) 
    {
        printf("Ingrese el valor del numero %d: ", i + 1);
        scanf("%d", &num[i]);
        prom += num[i];
        mayor = num[0];
        if (num[i] > mayor) 
        {
            mayor = num[i];
        }
    }

    printf("El promedio es: %d\n", prom / 5);
    printf("El mayor es: %d\n", mayor);
    
    return 0;
}
