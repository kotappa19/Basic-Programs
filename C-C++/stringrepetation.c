#include<stdio.h>
int main()
{
    char m[100],k[100];
    int i=0,s=0;
    printf("enter the string");
    gets(m);
    for(i=0;m[i]!='\0';i++)
    { 
        for(int j=i+1;m[j]!='\0';j++)
        {     
            if(m[i]==m[j])
            {
                k[s++]=m[j];
            }
        }
    }
    for(i=0;m[i]!='\0';i++)
    {
        m[i]=m[i]-k[i];
        printf("%c",m[i]);
    }
}