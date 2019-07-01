#include <stdio.h>
#include <stdlib.h>
float nuevosalario(int x);
int main()
{
    int a;
    printf("Programa que calcula el nuevo salario de empleados dado el actual \n\n");
    printf("Ingrese salario actual\n");
    scanf("%d",&a);
    printf("El nuevo salario es: %.1f", nuevosalario(a));
    return 0;
}

float nuevosalario(int x)
{
    int salario;
    if(x>=0 || x<=9000)
    {
      salario=(x*0.2)+x;
      return salario;
    }

     if(x>=9001 || x<=15000)
    {
      salario=(x*0.1)+x;
      return salario;
    }

     if(x>=15001 || x<=20000)
    {
      salario=(x*0.05)+x;
      return salario;
    }

     if(x>20000)
    {
      salario=x;
      return salario;
    }
}
