#include<stdio.h>
int main()
{
    int n,m[100],k[100],d,l=0;
    printf("enter n and d");
    scanf("%d%d",&n,&d);
    d=d%n;
    for(int i=0;i<n;i++)
        scanf("%d",&m[i]);
    for(int i=0;i<d;i++)
        k[i]=m[i];
    for(int i=d;i<n;i++)
        m[i-d]=m[i];
    for(int i=(n-d);i<n;i++)
        m[i]=k[l++];
    for(int i=0;i<n;i++)
        printf("%d\t",m[i]);

}