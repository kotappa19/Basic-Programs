#include<stdio.h>
#include<string.h>
int main()
{
    char m[100],k[100];
    int i,j,s;
    printf("enter two strings");
    gets(m);
    gets(k);
    for(i=0;m[i]!='\0';i++)
    {
        s++;
    }
    printf("the length of first string is %d\n",s);
    for(j=0;k[j]!='\0';j++)
    {
        m[s++]=k[j];
    }
    m[s]='\0';
    printf("the length of second string is %d\n",j);
    puts(m);
    printf("the length after concatenation is %d",s);

}