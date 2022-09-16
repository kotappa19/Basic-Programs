#include<stdio.h>
void prime_numbers(int k)
{
     int i,j,m[50];
        for(i=1;i<=k;i++)
        m[i]=i;
    for(i=2;i*i<=k;i++)
        for(j=i+1;j<=k;j++)
            if(j%i==0)
                m[j]=0;
    for(i=2;i<=k;i++)
        if(m[i]!=0)
            printf("%d\t",m[i]);
}
int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    prime_numbers(n);
}