#include<stdio.h>
#include<limits.h>
int power(int n,int j)
{
    int res=1;
    while(j>0)
    {
        res*=n;
        j--;
    }
    return res;
}
int main()
{
    int x,y,i=0,sum=0;
    scanf("%d%d",&x,&y);
    int a[100],b[100],res[100];
    while(x>0)
    {
        a[i++]=x%2;
        x=x/2;
    }
    i=0;
    while(y>0)
    {
        b[i++]=y%2;
        y=y/2;
    }
    int len=i;
    for(int i=0;i<len;i++)
    {
        if(a[i]==b[i])
            res[i]=0;
        else
            res[i]=1;
    }
    for(int i=0;i<len;i++)
    {
        sum+=(res[i]*(power(2,i)));
    }
    printf("%d\n",sum);
}