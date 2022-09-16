#include<stdio.h>
int isprime(int n)
{
    if(n==0||n==1)
        return 0;
    else if(n<=3)
        return 1;
    else if(n%2==0||n%3==0)
        return 0;
    else
        for(int i=5;i*i<=n;i=i+6)
            if(n%i==0||n%(i+2)==0)
                return 0;
    return 1;
}
int main()
{
    int m,n,i;
    printf("enter m and n");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n-6;i++)
        if(isprime(i)==1&&isprime(i+6)==1)
            printf("%d\t%d\n",i,i+6);
}