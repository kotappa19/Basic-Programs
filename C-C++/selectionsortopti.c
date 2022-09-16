#include<stdio.h>
int main()
{
    int n,a[30],i,j,min,k;
    printf("enter n");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
            if(a[min]>a[j])
                min=j;
        k=a[min];
        for(j=min;j>i;j--)
            a[j]=a[j-1];
        a[j]=k;
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}