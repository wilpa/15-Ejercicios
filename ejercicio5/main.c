#include <stdio.h>
#include <stdlib.h>
int logica(char c);
int main()
{
    char s;
    printf("Funcion que determina si un caracter es una vocal\n");
    printf("\n");
    printf("Ingrese caracter \n");
    scanf("%c",&s);
    printf("\n");
    printf("Si devuelve 1 es una vocal y si devuelve 0 no lo es: %d\n",logica(s));
    return 0;
}
int logica(char c)
{
   if(c=='a' || c=='A')
   {
       return 1;
   }

   if(c=='e' || c=='E')
   {
       return 1;
   }

   if(c=='i' || c=='I')
   {
       return 1;
   }

   if(c=='o' || c=='O')
   {
       return 1;
   }

   if(c=='u' || c=='U')
   {
       return 1;
   }
    return 0;
}
