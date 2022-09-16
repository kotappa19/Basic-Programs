#include<stdio.h>
void isprime(int k)
{
        int i,flag=0;
    for(i=2;i*i<=k;i++)
    {
        if(k%i==0)
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
    int m;
    printf("enter n--");
    scanf("%d",&m);
    isprime(m);
}