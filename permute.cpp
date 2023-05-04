#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z;
    printf("entrer la valeur de x: "); 
    scanf("%d",&x);
    printf("entrer la valeur de y: ");
    scanf("%d",&y);
    printf("les valeur de x et y sont :\n x= %d et y= %d",x,y);
    z=x;
    x=y;
    y=z;
    printf("\nles valeur de x et y sont :\n x= %d et y= %d",x,y);
    return 0;

}