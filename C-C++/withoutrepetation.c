#include<stdio.h>
#include<string.h>
int main()
{
    char m[100];
    int i,j;
    printf("enter the string");
    gets(m);
    for(i=0;m[i]!='\0';i++)
    {
        for(j=i+1;m[j]!='\0';j++)
        {
            if(m[i]==m[j])
                m[j]='$';
        }
         if(m[i]!='$')
            printf("%c",m[i]);
    }
}