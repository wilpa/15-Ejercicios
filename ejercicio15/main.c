#include <stdio.h>
#include <stdlib.h>
int cant_chars(char s[]);
void invierte(char s[]);
int main()
{

char s[10];

 printf("Programa que invierte un numero ingresado\n\n");
 printf("Ingrese numero a invertir: \n");  scanf("%s",s);
 invierte(s);
 printf("El numero invertido es: ");
 printf("%s\n", s);
 return 0;
}
void invierte(char s[])
{

    int n = cant_chars(s);


    int tmp;
    int i;
    for( i=0; i<n/2; i++){
        int i_final = n-1-i;
        tmp = s[i];
        s[i] = s[i_final];
        s[i_final] = tmp;
    }
}

int cant_chars(char s[])
{
    int c = 0;
   while(s[c]!='\0'){
    c++;
    }
    return c;
}
