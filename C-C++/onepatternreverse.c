#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("n=");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}