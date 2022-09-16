#include<stdio.h>
int power(int a,int n)
{
    if(n==0)
        return 1;
    else
        return a*power(a,n-1);
}
int main()
{
    int a,n,sum=0;
    printf("a and n=");
    scanf("%d%d",&a,&n);
    for(int i=1;i<=n;i++)
        sum=sum+power(a,i);
    printf("%d",sum);
    
}