#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int funcion(int x);
int main()
{   int x;
    printf("Programa que acepta un parametro y realiza un proceso\n\n");
    printf("Ingrese el valor de x\n");
    scanf("%d",&x);
    printf("\n");
     printf("El resultado es:  %d \n\n",funcion(x));
    return 0;
}
int funcion(int x)
{
    if(x<0 || x>0)
    {
        return (1/(x^3*2^1/x-1));
    }
    else if(x==0)
    {
        return 0;
    }
}
