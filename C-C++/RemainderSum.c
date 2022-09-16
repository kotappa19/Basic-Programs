#include<stdio.h>
int main()
{
    int n,k,i,sum=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum+=a[i]%k;
    printf("%d\n",sum);
}