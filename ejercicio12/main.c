#include <stdio.h>
#include <stdlib.h>
int recursiva(int x, int n);
int main()
{
    int x,n;
    printf("Programa que acepta dos parametros y realiza diferentes procesos\n");

    printf("Ingrese valor de x \n");
    scanf("%d",&x);
    printf("Ingrese valor de n \n");
    scanf("%d",&n);
    printf("El resultado es: %d \n", recursiva(x,n));
    return 0;
}
int recursiva(int x, int n)
{
    if(x>=0)
    {
        return x+((x^n)/n)-((x^n+1)/n+2);
    }
    else if(x<=0)
    {
        return x+((x^n+1)/n+1)-((x^n-1)/n-1);
    }
}
