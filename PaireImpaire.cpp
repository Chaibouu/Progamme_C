#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("entrer la valeur de x: ");
    scanf("%d", &x);
    if (x%2==0)
    {
        printf("%d est un nombre paire",x);
    }
    else{
        printf("%d est un nombre impaire",x);
    }
    return 0;
}