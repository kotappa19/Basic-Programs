#include<stdio.h>
int main()
{
    int n,x,y,m[30],i=0,count=0,large,s_large,k=0;
    printf("n=");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        m[i++]=x;
        count++;
        n=n/10;
    }
    large=m[0];
    for(i=2;i<count;i++)
    {
        if(large<m[i])
        {
            large=m[i];
            k=i;
        }
    }
    if(k==0)
        printf("%d%d",m[k+1],large);
    else if(k==count-1)
        printf("%d%d",large,m[k-1]);
    else
    {
        if(m[k-1]>m[k+1])
            printf("%d%d",large,m[k-1]);
        else
            printf("%d%d",m[k+1],large);
    }
}