#include <stdio.h>

int main() 
{
    int ventas[300] = {0};
    int totalVendedor[20] = {0};
    int total = 0, mayor = 0, menorVta = 999999, vendedorMayor = 0, vendedorMenor = 0;
    int i, vendedor, dia, vta;

    for(i = 0; i < 300; i++)
    {
        printf("Vendedor (1-20): ");
        scanf("%d", &vendedor);
        
        if(vendedor < 1 || vendedor > 20) {
            printf("Vendedor inválido. Intente de nuevo.\n");
            i--;
            continue;
        }
        
        printf("Día (1-15): ");
        scanf("%d", &dia);
        
        if(dia < 1 || dia > 15) {
            printf("Día inválido. Intente de nuevo.\n");
            i--;
            continue;
        }
        
        printf("Unidades vendidas: ");
        scanf("%d", &vta);
        
        ventas[(vendedor - 1) * 15 + (dia - 1)] = vta;
        
        total += vta;
        totalVendedor[vendedor - 1] += vta;
        
        printf("✓ Registrado\n\n");
    }

    for(i = 0; i < 20; i++)
    {
        if(totalVendedor[i] > mayor) {
            mayor = totalVendedor[i];
            vendedorMayor = i + 1;
        }
        if(totalVendedor[i] < menorVta) {
            menorVta = totalVendedor[i];
            vendedorMenor = i + 1;
        }
    }

    printf("Total de unidades vendidas: %d\n", total);
    printf("Vendedor con mayor ventas: #%d (%d unidades)\n", vendedorMayor, mayor);
    printf("Vendedor con menor ventas: #%d (%d unidades)\n", vendedorMenor, menorVta);
    
    printf("\n--- Total por vendedor ---\n");
    for(i = 0; i < 20; i++) {
        printf("Vendedor %2d: %d unidades\n", i + 1, totalVendedor[i]);
    }

    return 0;
}