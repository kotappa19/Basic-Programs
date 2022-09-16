#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n],count=0;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        int key=a[i];
        for(int j=0;j<n;j++)
        {
            if(a[j]==key)
                count++;
        }
        if(count%2!=0)
        {
            x=i;
            break;
        }
        else
            count=0;
    }
    printf("%d\n",a[x]);
}