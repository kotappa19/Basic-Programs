#include<stdio.h>
int main()
{
    int n,i,a[100],small;
    printf("n=");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=1;i<=n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("%d",small);
}