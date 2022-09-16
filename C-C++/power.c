#include<stdio.h>
int main()
{
    int n=2,j=2;
    int res=1;
    while(j>0)
    {
        res*=n;
        j--;
    }
    printf("%d",res);
}