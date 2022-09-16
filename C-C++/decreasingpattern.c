#include<stdio.h>
int main()
{
    int m,i,j;
    printf("enter m");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=i;j<m;j++)
            printf("*");
        printf("\n");
    }
}