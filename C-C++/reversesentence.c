#include<stdio.h>
int main()
{
    char m[100],k[100];
    int i,j,l=0;
    printf("enter the string--");
    gets(m);
    for(i=0;m[i];i++);
    for(j=i-1;j>=0;j--)
        k[l++]=m[j];
    k[l]='\0';
    for(i=0;k[i];i++)
    {
        if(k[i]==' ')
        {
            for(j=i-1;j>=0&&k[j]!=' ';j--)
                printf("%c",k[j]);
            printf(" ");
        }
    }
    for(j=i-1;k[j]!=' ';j--)
        printf("%c",k[j]);
}