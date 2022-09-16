#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,flag=0;
    printf("n=");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d is not a prime number\n",n);
        exit(0);
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);

}