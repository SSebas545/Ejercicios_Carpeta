#include <stdio.h>

int main() 
{
    int num[10], i, sum = 0, product = 1, bajo_prom = 0, opcion;
    float prom;
    
    printf("Ingrese 10 numeros:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &num[i]);
        sum += num[i];
        product *= num[i];
    }
    
    prom = sum / 10;
    
    for (i = 0; i < 10; i++) 
    {
        if (num[i] < prom) 
        {
            bajo_prom++;
        }
    }
    printf("Desea ordenar el vector de forma ascendente (1), descendente (2) o sin ordenar (3)?\n");
    scanf("%d", &opcion);
    if (opcion == 1) 
    {
        for (i = 0; i < 10 - 1; i++) 
        {
            for (int j = 0; j < 10 - i - 1; j++) 
            {
                if (num[j] > num[j + 1]) 
                {
                    int temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }
    } 
    else if (opcion == 2) 
    {
        for (i = 0; i < 10 - 1; i++) 
        {
            for (int j = 0; j < 10 - i - 1; j++) 
            {
                if (num[j] < num[j + 1]) 
                {
                    int temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }
    }
    else if (opcion == 3) 
    {
        printf("El vector no se ordenara.\n");
    } 
    else 
    {
        printf("Opcion invalida. El vector no se ordenara.\n");
    }
    
    printf("La suma de los elementos es: %d\n", sum);
    printf("El producto de los elementos es: %d\n", product);
    printf("El promedio de los elementos es: %d\n", prom);
    printf("La cantidad de elementos debajo del promedio es: %d\n", bajo_prom);
    printf("El vector es:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", num[i]);
    }
    
    return 0;
}