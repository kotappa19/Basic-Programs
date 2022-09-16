#include<stdio.h>
int  gcd(int n1,int n2)
{
    if(n1==0)
        return n2;
    else if(n2==0)
        return n1;
    else
        return gcd(n2,(n1%n2));
}
int main()
{
    int n1,n2;
    printf("n1 and n2");
    scanf("%d%d",&n1,&n2);
    printf("GCD=%d\nLCM=%d",gcd(n1,n2),(n1*n2)/gcd(n1,n2));
}