#include<stdio.h>
#include<string.h>
int main()
{
    char m[100],k[100];
    int i,j,flag=0;
    printf("enter two strings");
    gets(m);
    gets(k);
    for(i=0,j=0;m[i]!='\0'&&k[j]!='\0';i++,j++)
    {
        if(m[i]!=k[j])
            flag=1;
    }
    if(flag==1)
        printf("both strings are not equal\n");
    else
        printf("both strings are equal\n");
}