#include<stdio.h>
int main()
{
    int n,a[100],i,mul=1,mult=1;
    printf("n=");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        mul=mul*a[i];
    }
    for(i=0;i<n;i++)
    {
        mult=mul/a[i];
        printf("%d\n",mult);
    }

}