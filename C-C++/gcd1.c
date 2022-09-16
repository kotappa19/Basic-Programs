#include<stdio.h>
int gcd(int n1,int n2)
{
    if(n1==0)
        return n2;
    else if(n2==0)
        return n1;
    else
        return gcd(n2,n1%n2);
}
int main()
{
    int n1,n2,g;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    g=gcd(n1,n2);
    printf("GCD=%d",g);
}