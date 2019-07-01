#include <stdio.h>
#include <stdlib.h>
int mayor(int a, int b);
int main()
{
    int x,y;
    printf("Función que determina que numero es mayor\n\n");
    printf("Ingrese numero 1: ");
    scanf("%d",&x);
    printf("\n");
    printf("Ingrese numero 2: ");
    scanf("%d",&y);
    printf("\n");
    if(mayor(x,y)==0)
    {
        printf("Los numeros son iguales, no se pueden comparar!\n");
    }
    else{
    printf("El mayor es: %d",mayor(x,y));
    }
    return 0;
}

int mayor(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else if(b>a)
    {
        return b;
    }
    else if(a=b)
    {
        return 0;
    }
}
