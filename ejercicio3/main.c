#include <stdio.h>
#include <stdlib.h>
float convierte(float c);
int main()
{
    float x;
    printf("Funcion que convierte una temperatura dada en grados Celsius a grados Fahrenheit\n");
    printf("\n");
    printf("Ingrese la temperatura en celsius\n");
    scanf("%f",&x);
    printf("\n");
    printf("La temperatura ingresada es %.2f °C \n",x);
    printf("\n");
    printf("Convertida a Fahrenheit es: %.2f °F ",convierte(x));
    return 0;
}
float convierte(float c)
{
    float resultado=0.0;
    resultado=((9.0/5.0)*c)+32.0;
    return resultado;
}
