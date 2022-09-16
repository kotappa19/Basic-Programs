#include<stdio.h>
int main()
{
    char str[100];
    int i,j,count;
    printf("enter the string--");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]!='0')
        {
            count=1;
            for(j=i+1;str[j];j++)
            {
                if(str[i]==str[j])
                {
                    count++;
                    str[j]='0';
                }
            }
            printf("%c-->%d\n",str[i],count);
        }
    }
}