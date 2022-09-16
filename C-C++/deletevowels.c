#include<stdio.h>
#include<string.h>
int main()
{
    char m[100],k[100];
    int i,j;
    printf("enter the string");
    gets(m);
    j=0;
    for(i=0;m[i]!='\0';i++)
    {
        if(!(m[i]=='a' || m[i]=='e' || m[i]=='i' || m[i]=='o' || m[i]=='u' || m[i]=='A' || m[i]=='E' || m[i]=='I' || m[i]=='O' || m[i]=='U'))
            k[j++]=m[i]; 
    }
    k[j]='\0';
    puts(k);
}