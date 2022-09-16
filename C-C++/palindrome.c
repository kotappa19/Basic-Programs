#include<stdio.h>
int main()
{
    int n,x,g,res=0;
    printf("n=");
    scanf("%d",&n);
    g=n;
    while(n>0)
    {
        x=n%10;
        res=res*10+x;
        n=n/10;
    }
    printf("%d\n",res);
    if(g==res)
        printf("palindrome\n");
    else
        printf("not palindrome\n");
}