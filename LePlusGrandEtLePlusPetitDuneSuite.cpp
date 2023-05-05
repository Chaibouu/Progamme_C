#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z,i;
    printf("combien de nombre voulez vous entrer ?: ");
    scanf("%d",&x);
    for ( i = 1; i<= x; i++)
    {
        printf("%d \t",i);
    }
    return 0; 
}