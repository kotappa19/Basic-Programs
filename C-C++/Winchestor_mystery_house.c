#include<stdio.h>
int main()
{
    int n,i,k,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0,k=0;i<n;i++)
    {
        k=a[i];
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("False\n");
    else
        printf("True\n");
}