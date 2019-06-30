#include <stdio.h>
#include <stdlib.h>
int logica(int x, int y);
int main()
{
    int a,b;
    printf("Funcion logica que dice si un numero divide al otro \n");
    printf("\n");
    printf("Ingrese primer numero\n");
    scanf("%d",&a);
    printf("\n");
    printf("Ingrese segundo numero\n");
    scanf("%d",&b);
    printf("\n");
    printf("Si aparece 1 son divisibles y si aparece 0 no lo son: %d",logica(a,b));
    return 0;
}
int logica(int x, int y)
{
    if(x%y==0 || y%x==0)
    {
        return 1;
    }
    else if(x%y!=0 || y%x!=0)
    {
        return 0;
    }
}
