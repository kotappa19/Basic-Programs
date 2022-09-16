#include<stdio.h>
int main()
{
    int n,x,res=0;
    printf("n=");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        res=res*10+x;
        n=n/10;
    }
    printf("reversed number is %d\n",res);
}