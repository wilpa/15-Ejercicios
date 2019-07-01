#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int area(int a, int b, int c);
int main()
{   int a,b,c;
    printf("Programa que devuelve el area de un triangulo\n\n");
    printf("Ingrese lado 1\n");
    scanf("%d",&a);
     printf("Ingrese lado 2\n");
    scanf("%d",&b);
     printf("Ingrese lado 3\n");
    scanf("%d",&c);
    printf("El area del triangulo es: %d \n",area(a,b,c));
    return 0;
}
int area(int a, int b, int c)
{
    int p=(a+b+c)/2;
    int problema;
    int resultado;
    problema=p*(p-a)*(p-b)*(p-c);
    return sqrt(problema);
}
