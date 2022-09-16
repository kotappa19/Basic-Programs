#include<stdio.h>
#include<string.h>
int main()
{
    char k[100],m[100];
    int i,j,s;
    printf("enter the string");
    gets(k);
    for(i=0;k[i]!='\0';i++);
    printf("%d\n",i);
    s=0;
    for(j=i-1;j>=0;j--)
    {
        m[j]=k[s];
        s++;
    }
    m[j]='\0';
    puts(m);
}