#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int n,sum=0,i,j;
    scanf("%d",&n);
    int count=0;
    int arrcount[n];
    char pat[100];
    scanf("%s",pat);
    for(j=0;j<n;j++)
    {
        for(i=0;str[i];i++)
        {
            if(str[i]==pat[j])
                count++;
        }
        arrcount[j]=count;
        count=0;
    }
    for(i=0;i<n;i++)
        sum+=(pat[i]*arrcount[i]);
    printf("%d\n",sum);
}
