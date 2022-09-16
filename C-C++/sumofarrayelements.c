#include<stdio.h>
int sum(int a[],int n)
{
    if(n==0)
        return 0;
    else
        return a[n]+sum(a,n-1);
}
int main()
{
    int n,a[100],i,arrsum=0;
    printf("n=");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    arrsum=sum(a,n);
    printf("%d",arrsum);
}