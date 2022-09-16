#include<stdio.h>
int main()
{
    char m[100];
    int i,j,x=0,flag=0;
    printf("enter the string");
    gets(m);
    for(i=0;m[i];i++);
    x=i/2;
    i--;
    for(j=0;j<x;j++)
    {
        if(m[j]==m[i])
        {
            i--;
            flag=1;
        }
    }
    if(flag==1)
        printf("palindrome");
    else
        printf("not palindrome");

}