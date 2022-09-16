#include<stdio.h>
void main()
{
    char m[100];
    int i,j;
    printf("enter the string--");
    gets(m);
    for(i=0;m[i];i++)
    {
        if(m[i]==' ')
        {
            for(j=i-1;j>=0&&m[j]!=' ';j--)
                printf("%c",m[j]);
            printf(" ");
        }
    }
    for(j=i-1;m[j]!=' ';j--)
        printf("%c",m[j]);
}