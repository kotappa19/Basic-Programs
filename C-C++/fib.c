#include<stdio.h>
int main()
{
    int n,i,fib1=0,fib2=1,fib3;
    scanf("%d",&n);
    printf("%d\t%d\t",fib1,fib2);
    for(i=0;i<(n-2);i++)
    {
        fib3=fib1+fib2;
        printf("%d\t",fib3);
        fib1=fib2;
        fib2=fib3;
    }

}