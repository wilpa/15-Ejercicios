#include <stdio.h>
#include <stdlib.h>
int cambiobase(int x, int y);
int main()
{   int b,e;
    printf("Programa que invierte el exponente con la base\n\n");
    printf("Ingrese la base:  \n");
    scanf("%d",&b);
     printf("Ingrese el exponente:  \n");
    scanf("%d",&e);
    printf("El resultado es: %d \n\n", cambiobase(b,e));
    return 0;
}
int cambiobase(int x, int y)
{
    int resultado;
    resultado= pow(y,x);
    return resultado;
}
