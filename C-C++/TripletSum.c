#include<stdio.h>
void main()
{
    int n,val,sum=0,t_sum=0,x,y,z;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&val);
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        for(int j=i+1;j<n;j++)
        {
            sum+=a[j];
            for(int k=j+1;k<n;k++)
            {
                sum+=a[k];
                if(sum==val)
                {
                    t_sum=sum;
                    x=a[k];
                    y=a[j];
                    z=a[i];
                    break;
                }
                else
                    sum-=a[k];
            }
            sum-=a[j];
        }
        sum-=a[i];
    }
    printf("%d  %d  %d\n",x,y,z);
}