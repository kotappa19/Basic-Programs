#include<stdio.h>
int main()
{
    char m[100],k[100];
    int i,flag=0,j,count=0;
    printf("enter the string--");
    gets(m);
    for(i=0;m[i];i++)
        if((m[i]>='A'&&m[i]<='Z')||(m[i]>='a'&&m[i]<='z'))
            k[i]=m[i];
    k[i]='\0';
    for(i=0;k[i];i++)
        for(j=i+1;k[j];j++)
            if(k[i]==k[j])
                k[j]='0';
    for(i=0;k[i];i++)
        if(k[i]!='0')
            count++;
    if(count==26)
        printf("panagram");
    else
        printf("not panagram"); 
}