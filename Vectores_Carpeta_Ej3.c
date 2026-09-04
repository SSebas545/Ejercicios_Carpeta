#include <stdio.h>

int main() 
{
    int num1 = 0, num2 = 0, i = 0;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    i = num1-num2;
    if (i < 0)
    {
        i = i * -1;
    }
    int intermedios[i];
    if (num1 < num2)
    {
        for (int j = 0; j < i; j++)
        {
            intermedios[j] = num1 + j + 1;
        }
    }
    else
    {
    for (int j = 0; j < i; j++)
    {
        intermedios[j] = num2 + j + 1;
    }
    }
    printf("Los numeros intermedios son: ");
    for (int j = 0; j < i; j++)
    {
        printf("%d ", intermedios[j]);
    }
    return 0;
}