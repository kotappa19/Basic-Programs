#include<stdio.h>
int main()
{
    char m[50],k[50];
    int i,j=0,l,flag=0;
    printf("enter the main string");
    gets(m);
    printf("enter the sub string");
    gets(k);
    for(i=0;m[i];i++)
    {
        l=i;
        while(m[l]==k[j]&&m[l]!='\0'&&k[j]!='\0')
        {
            l++;
            j++;
        }
        if(k[j]=='\0')
            flag=1;
    }
    if(flag==1)
        printf("sub string found");
    else   
        printf("sub string not found");
}
