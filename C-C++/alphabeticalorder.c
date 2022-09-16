#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp;
    int i,j,n,flag;
    printf("string=");
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    puts(str);
    printf("the number of cycles is %d",i+1);
    
}