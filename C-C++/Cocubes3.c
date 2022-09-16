#include<stdio.h>
int main()
{
    char str[100];
    int i,len;
    scanf("%s",str);
    for(i=1;str[i];i++)
    {
        if(str[i]==str[i-1] && str[i]==str[i+1])
        {
            int k=i-1,j;
            for(j=i+1;str[j];j++,k++)
            {
                str[k]=str[j];
            }
            i-=2;
            str[j-1]=str[j-2]='\0';
        }
    }
        printf("%s",str);
}