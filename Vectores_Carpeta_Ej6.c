#include <stdio.h>

int main() 
{
    int limite, i;
    int fibonacci[2] = {0, 1};
    printf("Ingrese el limite para la sucesion de Fibonacci: ");
    scanf("%d", &limite);
    for (i = 2; i < limite; i++) 
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    printf("La sucesion de Fibonacci hasta %d es: ", limite);
    for (i = 0; i < limite; i++) {
        printf("%d ", fibonacci[i]);
    }
    return 0;
}
