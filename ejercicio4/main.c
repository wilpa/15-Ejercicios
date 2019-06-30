#include <stdio.h>
#include <stdlib.h>
int determina(char c);
int main()
{
    char s;
    printf("Funcion logica que determina si un caracter es uno de los digitos de 0 a 9\n");
    printf("\n");
    printf("Ingrese caracter\n");
    scanf("%d",&s);
    printf("\n");
    printf("Si devuelve 1 lo es y si devuelve 0 no lo es: %d \n", determina(s));
    return 0;
}
int determina(char c)
{
    if(c>='0'&&c<='9')
    {
        return 1;
    }
    return 0;
}
