#include <stdio.h>
#include <stdlib.h>
int facil(int x);
int main()
{   int nota;
    printf("Programa que dice si una nota es alta o baja\n\n");
    printf("Ingrese nota: \n");
    scanf("%d",&nota);
    printf("Nota es: %d",facil(nota));
    printf("\n");
    if(facil(nota)==1)
    {
        printf("ALTA\n");
    }
    else
    {
        printf("BAJA\n");
    }
    return 0;
}
int facil(int x)
{
    if(x>=100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
