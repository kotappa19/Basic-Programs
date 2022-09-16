#include<stdio.h>
int main()
{
    int x;
    printf("x=");
    scanf("%d",&x);
    if(x<10)
        printf("cold day");
    else if(x==10||x<=25)
        printf("normal day");
    else
        printf("hot day");
}