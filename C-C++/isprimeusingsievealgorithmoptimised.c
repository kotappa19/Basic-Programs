#include<stdio.h>
int isprime(int k)
{
    if(k==2||k==3||k==5||k==7)
        return 1;
    else if(k==0||k==1||k%2==0||k%3==0||k%5==0||k%7==0)
        return 0;
    else
        return 1;
}
int main()
{
    int m;
    printf("enter m--");
    scanf("%d",&m);
    if(isprime(m))
        printf("prime");
    else
        printf("not prime");
}