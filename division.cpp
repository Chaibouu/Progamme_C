#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z;
    printf("entrer la valeur de x: ");
    scanf("%d",&x);
    printf("entrer la valeur de y: ");
    scanf("%d",&y);
    z=x/y;
    printf("le resultat de %d divisé par %d est %d",x,y,z);
    return 0;
}