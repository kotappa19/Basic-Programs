#include<stdio.h>
int reverse(int n)
{
    static int s=0;
    if(n==0)
        return s;
    else
    {
        int r;
        r=n%10;
        s=r+s*10;
        reverse(n/10);

    }
}
int main()
{
    int n,rev=0;
    printf("n=");
    scanf("%d",&n);
    rev=reverse(n);
    if(rev==n)
        printf("it is palindrome");
    else
        printf("not a palindrome");
}