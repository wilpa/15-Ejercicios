#include <stdio.h>
#include <stdlib.h>
int determina(int x);
int main()
{
    printf("Funcion que recibe un argumento tipo entero y te dice si es negativo (N=78) o positivo (P=80) \n");
    int x;
    printf("\n");
    printf("Ingrese el numero que desea evaluar \n");
    scanf("%d",&x);
     printf("\n");
    printf("El numero es: %d \n", determina(x));
    return 0;
}
int determina(int x)
{

    if(x>0)
    {
        return 'P';
    }
    else if(x<=0)
    {
        return 'N';
    }
}
