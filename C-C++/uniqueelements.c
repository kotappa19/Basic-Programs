//UNIQUE ELEMENTS
#include<stdio.h>
int main()
{
    int n,a[100],i,j,flag=0;
    printf("n=");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d\t",a[i]);
    }

}