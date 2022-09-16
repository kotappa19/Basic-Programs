#include<stdio.h>
int main()
{
    int m,i,k,n;
    for(i=100;i<=999;i++)
    {
        n=i;
        k=0;
        while(n>0)
        {
            m=n%10;
            k+=m*m*m;
            n=n/10;
        }
        if(i==k)
        {
            printf("%d is first 3 digit armstrong number",i);
            break;
        }
     }

           
 }
