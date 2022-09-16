#include<stdio.h>
int main()
{
    int n,a[100],i,k,j,temp;
    printf("enter n and k");
    scanf("%d%d",&n,&k);
    printf("enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("after rotation");
    for(i=0;i<k;i++)
    {
        temp=a[i];
        for(j=0;j<n;j++)
        {
            a[j]=a[j+1];
        }
        a[j-1]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[j]);

}