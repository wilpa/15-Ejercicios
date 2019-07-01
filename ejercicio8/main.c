#include <stdio.h>
#include <stdlib.h>
#define TAM 99

int main()
{
    int matriz[TAM][TAM];
    int i,j,tf,tc;

    printf("Programa que intercambia una matriz de dos dimensiones dadas \n\n");
    printf("\nIngrese tamano de Filas : ");
    scanf("%d",&tf);
    printf("\nIngrese tamano de Columnas : ");
    scanf("%d",&tc);
    printf("\nRellenando matriz\n");
    for(i=0; i<tf; i++)
    {
        for(j=0; j<tc; j++)
        {
            printf("mat[%d][%d] = ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n\nMatriz original");
    printf("\n\n");
    for(i=0; i<tf; i++)
    {
        printf("\n");
        for(j=0; j<tc; j++)
        {
            printf(" %d ",matriz[i][j]);
        }
    }
    printf("\n\nMatriz original");
    printf("\n\n");
    for(i=0; i<tc; i++)
    {
        printf("\n");
        for(j=0; j<tf; j++)
        {
            printf(" %d ",matriz[j][i]);
        }
    }
    printf("\n\n\n");
    return 0;
}
