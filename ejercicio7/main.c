#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    int i,j;
    printf("Programa que imprime la matriz transpuesta de una matriz dada \n\n");
    printf("\nRellenando matriz\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("matriz[%d][%d] = ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n\nMatriz original");
    printf("\n\n");
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf(" %d ",matriz[i][j]);
        }
    }
    printf("\n\nMatriz Transpuesta");
    printf("\n\n");
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf(" %d ",matriz[j][i]);
        }
    }
    printf("\n\n\n");

    return 0;
}
