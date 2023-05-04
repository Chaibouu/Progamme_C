#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z;
    printf("entrer la valeur de x: ");
    scanf("%d",&x);
    printf("entrer la valeur de y: ");
    scanf("%d",&y);
    printf("entrer la valeur de z: ");
    scanf("%d",&z);

    if (x>y && x>z)
    {
        printf("des valeur %d %d %d \n le plus grand est %d",x,y,z,x);
    }
    else if (y>x && y>z)
    {
        printf("des valeur %d %d %d \n le plus grand est %d",x,y,z,y);
    }
    else
    {
        printf("des valeur %d %d %d \n le plus grand est %d",x,y,z,z);
    } 
    return 0;
}