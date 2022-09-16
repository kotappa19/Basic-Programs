#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int res=a[0];
    for(int i=1;i<n;i++)
        res=res^a[i];
    printf("%d\n",res);
}