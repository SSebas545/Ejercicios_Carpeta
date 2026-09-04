#include <stdio.h>

int main() 
{
    int rt=0, resistencias[5] = {0};
    for (int i = 0; i < 5; i++) 
    {
        printf("Ingrese el valor de la resistencia %d: ", i + 1);
        scanf("%d", &resistencias[i]);
        rt += resistencias[i];
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("Resistencia %d: %d\n", i + 1, resistencias[i]);
    }
    printf("La resistencia total es: %d\n", rt);
    return 0;
}
