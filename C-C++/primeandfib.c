/*    1,2,1,3,2,5,3,7,5,11,8,13,13,17
input-n
prime numbers are present is even positions and fibonacci numbers are present in odd positions   */
#include<stdio.h>
void prime(int n)
{
    int i,j,count=0,flag;
    for(i=2;i<10000;i++)
    {
        flag==0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
            if(count==n/2)
            {
                printf("%d",i);
                break;
            }
        }
    }
}
void fibonacci(int n)
{
    int fib1=1,fib2=1,fib3,count=2,i;
    for(i=0;i<10000;i++)
    {
        fib3=fib1+fib2;
        count++;
        if(count==(n/2)+1)
        {
            printf("%d",fib3);
            break;
        }
        else
        {
            fib1=fib2;
            fib2=fib3;
        }
    }
    
}
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    if(n%2==0)
        prime(n);
    else
        fibonacci(n);
}