#include<stdio.h>
#include<string.h>
int main()
{
    char m[100],k[100];
    int i;
    printf("enter the stirng");
    gets(m);
    for(i=0;m[i]!='\0';i++)
        k[i]=m[i];
    k[i]='\0';
    printf("after copying string is\n");
    puts(k);
}