#include<stdio.h>
int main()
{
    int r,unit,sum=0,count=0;
    scanf("%d %d",&r,&unit);
    int arr[r];
    for(int i=0;i<r;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<=r;i++)
    {
        if((r*unit)<=sum)
            break;
        else
        {
            sum+=arr[i];
            count+=1;
        }
    }
    printf("%d\n",count);
}
