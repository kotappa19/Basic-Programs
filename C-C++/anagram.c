#include<stdio.h>
#include<string.h>
int main()
{
    char k[100],m[100];
    int i,j,s=0,g[100];
    printf("enter the two strings");
    gets(k);
    gets(m);
    if(strlen(k)!=strlen(m))
        printf("both strings are not anagram");
    for(i=0;k[i]!='\0';i++)
    {
        for(j=0;m[j]!='\0';j++)
        {
            if(k[i]=m[j])
            {
                m[j]=0;
                k[i]=0;
                break;
            }
        }
    }
    

}