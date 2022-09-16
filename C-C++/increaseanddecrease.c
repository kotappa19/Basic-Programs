#include<stdio.h>
int main()
{
    int n,m[20],k,i,j,temp1,temp2,l,x;
    printf("enter n and k");
    scanf("%d%d",&n,&k);
    printf("enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(m[i]>m[j])
            {
                temp1=m[i];
                m[i]=m[j];
                m[j]=temp1;
            }
        }
    }
    for(i=k;i<n-1;i++)
    {
        for(j=k+1;j<n;j++)
        {
            
            if(m[i]<m[j])
            {
                temp2=m[i];
                m[i]=m[j];
                m[j]=temp2;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d\t",m[i]);

}