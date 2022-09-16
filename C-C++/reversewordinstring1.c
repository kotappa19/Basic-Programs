#include<stdio.h>
void main()
{
    char m[100];
    int i,j,k,prev=-1;
    printf("enter the string");
    gets(m);
    for(i=0;m[i];i++)
        if(m[i]==' ')
        {
            for(j=i-1;j>prev;j--)
                printf("%c",m[j]);
            printf(" ");
            prev=i;
        }
    for(j=i-1;j>prev;j--)
                printf("%c",m[j]);
}