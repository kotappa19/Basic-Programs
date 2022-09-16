#include<stdio.h>
int isPrime(int n)
{
    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("prime");
    else
        printf("not prime");
}
int main()
{
    int n;
    scanf("%d",&n);
    isPrime(n);
}