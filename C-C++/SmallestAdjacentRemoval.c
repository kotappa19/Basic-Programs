#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i,j;
    for(i=0,j=i+1;str[i];)
    {
        if(str[i]<str[j])
            str[i]='0';
        else 
            str[j]='0';
        i+=2;
        j+=2;
    }
    for(i=0;str[i];i++)
    {
        if(str[i]!='0')
            printf("%c",str[i]);
    }
}