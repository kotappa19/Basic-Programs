#include<stdio.h>
int main()
{
    int m,n,i,j,flag;
    printf("enter the range");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        flag=0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d\t",i);
    }
}