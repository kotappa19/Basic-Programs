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
    int a,n;
    printf("a and n=");
    scanf("%d%d",&a,&n);
    printf("the power of %d^%d=%d",a,n,power(a,n));
}