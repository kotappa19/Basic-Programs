#include<stdio.h>
int main()
{
    int m,i,j,mk[100],key,temp1,temp2;
    printf("m=");
    scanf("%d",&m);
    printf("enter the array elements");
    for(i=0;i<m;i++)
        scanf("%d",&mk[i]);
    i=0;
    j=m-1;
    key=mk[0];
    while(i<j)
    {
        while(key>=mk[i])
            i++;
        while(mk[j]>=key)
            j--;
        if(i<j)
        {
            temp1=mk[i];
            mk[i]=mk[j];
            mk[j]=temp1;

        }
    }
    temp2=mk[0];
    mk[0]=mk[j];
    mk[j]=temp2;
    for(i=0;i<m;i++)
        printf("%d\t",mk[i]);

}