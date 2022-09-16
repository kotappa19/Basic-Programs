#include<stdio.h>
int main()
{
    char m[100];
    int frequency[100],i,j,k=0;
    printf("enter the string");
    gets(m);
    for(i=0;m[i];i++)
    {
        for(j=i+1;j<=90;j++)
        {
            if(m[i]==m[j])
                frequency[k]++;
        }
    }

}