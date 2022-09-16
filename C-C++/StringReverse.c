#include<stdio.h>
int main()
{
    char str[100];
    int i,start=1,stop;
    gets(str);
    for(i=0;str[i]!='\0';i++);
    int len=i;
    for(i=0;i<=len;i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            stop=i-2;
            while(start<stop)
            {
                char temp=str[start];
                str[start]=str[stop];
                str[stop]=temp;
                start++;
                stop--;
            }
            start=i+2;
        }
    }
    puts(str);
}