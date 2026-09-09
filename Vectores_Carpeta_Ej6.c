#include <stdio.h>

int main() 
{
    int limite, i;
    
    printf("Ingrese el limite para la sucesion de Fibonacci: ");
    scanf("%d", &limite);
    
    int fibonacci[limite];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for (i = 2; i < limite; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    
    printf("La sucesion de Fibonacci hasta %d es: ", limite);
    for (i = 0; i < limite; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");
    
    return 0;
}
