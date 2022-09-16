#include<stdio.h>
void sexyprimes(int m,int n)
{
    int i,j,flag=0,k[50],l=0;
    for(i=m;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            //k[l++]=i;
            printf("%d\t",i);
        }
    }
    /*for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l-1;j++)
        {
            if((k[j]-k[i])==6)
                printf("%d\t%d",k[i],k[j]);

        }
    }*/
}
int main()
{
    int m,n;
    printf("enter m and n");
    scanf("%d%d",&m,&n);
    sexyprimes(m,n);
}