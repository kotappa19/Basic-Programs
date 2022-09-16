#include<stdio.h>
int Rotation(int a[],int n)
{
    int x=a[0],i,sum=0;
    for(i=1;i<n;i++)
        a[i-1]=a[i];
    a[i-1]=x;
    for(i=0;i<n;i++)
        sum+=a[i]*i;
    return sum;
}

int Biggest(int a[],int n)
{
    int big=a[0];
    for(int i=1;i<n;i++)
        if(big<a[i])
            big=a[i];
    return big;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],sum[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        sum[i]=Rotation(a,n);
    printf("%d\n",Biggest(sum,n));
}