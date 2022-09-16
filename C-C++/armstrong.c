#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,count=0,a,sum=0,b;
    printf("n=");
    scanf("%d",&n);
    a=n;
    b=n;
    while(n>0)
    {
        x=n%10;
        n=n/10;
        count++;
    }
    x=0;
    while(a>0)
    {
        x=a%10;
        sum+=pow(x,count);
        a=a/10;
    }
    if(b==sum)
        printf("%d is armstrong number\n",b);
    else
        printf("%d is not armstrong number\n",b);
}