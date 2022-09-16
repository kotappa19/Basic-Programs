#include<stdio.h>
int main()
{
    int n,m[100],i,j,temp;
    printf("enter n");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);
    for(i=1;i<n;i++)
    {
        temp=m[i];
        for(j=i-1;j>=0&&m[j]>temp;j--)
            m[j+1]=m[j];
        m[j+1]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d\t",m[i]);
}
