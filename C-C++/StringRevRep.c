#include<stdio.h>
int main()
{
    char str[50];
    gets(str);
    int i,j=0;
    for(i=0;str[i]!='\0';i++);
    int len=i-1;
    int k='1';
    for(int i=0;i<=len;i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        {
            if(k>'9')
            {
                k='1';
                str[i]=k++;
            }
            else
                str[i]=k++;
        }
    }
    while(j<len)
    {
        char temp=str[j];
        str[j]=str[len];
        str[len]=temp;
        j++,len--;
    }
    puts(str);
}