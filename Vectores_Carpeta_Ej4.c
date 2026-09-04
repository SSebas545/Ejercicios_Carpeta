#include <stdio.h>

int main() 
{
    float notas[120] = {0};
    int alumno, bimestre, cont = 0;
    
    do
    {
        printf("Ingrese el numero de alumno (1-30) o 0 para salir: ");
        scanf("%d", &alumno);
        
        if (alumno == 0)
        {
            break;
        }
        
        if (alumno < 1 || alumno > 30) 
        {
            printf("Numero de alumno invalido. Intente nuevamente.\n");
            continue;
        }
        
        printf("Ingrese el numero de bimestre (1-4): ");
        scanf("%d", &bimestre);
        
        if (bimestre < 1 || bimestre > 4) 
        {
            printf("Numero de bimestre invalido. Intente nuevamente.\n");
            continue;
        }
        
        printf("Ingrese la nota del alumno %d en el bimestre %d: ", alumno, bimestre);
        
        int posicion = (alumno - 1) * 4 + (bimestre - 1);
        scanf("%f", &notas[posicion]);
        
        cont++;
        printf("Nota ingresada correctamente.\n\n");
    }
    while (1);
    
    printf("\nRESULTADOS:\n");
    
    float suma_total = 0;
    int cont_total = 0;
    
    for (int i = 0; i < 120; i++)
    {
        if (notas[i] != 0)
        {
            suma_total += notas[i];
            cont_total++;
        }
    }
    
    printf("Promedio de cada alumno:\n");
    for (int a = 1; a <= 30; a++)
    {
        float suma_alumno = 0;
        int notas_alumno = 0;
        
        for (int b = 1; b <= 4; b++)
        {
            int posicion = (a - 1) * 4 + (b - 1);
            if (notas[posicion] != 0)
            {
                suma_alumno += notas[posicion];
                notas_alumno++;
            }
        }
        
        if (notas_alumno > 0)
        {
            float promedio_alumno = suma_alumno / notas_alumno;
            printf("Alumno %d: %.2f\n", a, promedio_alumno);
        }
    }
    
    printf("\n");
    if (cont_total > 0)
    {
        printf("Promedio general del curso: %.2f\n", suma_total / cont_total);
    }
    else
    {
        printf("No se ingresaron notas.\n");
    }
    
    return 0;
}
