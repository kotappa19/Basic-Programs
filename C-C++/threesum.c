#include<stdio.h>
int main()
{
    int m[100],n,i,j,sum=0,k,x;
    printf("enter n and x");
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);
    for(i=0;i<n;i++)
    {
        sum+=m[i];
        for(j=i+1;j<n-1;j++)
        {
            sum+=m[j];
            for(k=j+1;k<n-2;k++)
            {
                sum+=m[k];
            }
        }
    }
}