#include<stdio.h>
int isPrime(int n)
{
    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 1;
    else
        return 0;
}
void main()
{
    int t,len,flag=0;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d",&len);
        char str[len];
        int asci[len],ascid[len],ascii[len];
        scanf("%s",str);
        for(int i=0;i<len;i++)
            asci[i]=str[i];
        for(int i=0;i<len;i++)
        {
           for(int j=1;j<=90;j++)
           {
               if(isPrime(asci[i]))
               {
                    str[i]=asci[i];
                    return;
               }
               /*else if((isPrime(asci[i]+j))&&(isPrime(asci[i]-j))&&(((asci[i]+j)-asci[i])==(asci[i]-(asci[i]-j))))
               {
                   str[i]=asci[i]-j;
                   return;
               }*/
                else if(isPrime(asci[i]+j))
                {
                    if(!(asci[i]+j)>90)
                    {
                        str[i]=asci[i]+j;
                        return;
                    }
                }
                else if(isPrime(asci[i]-j))
                {
                    if(!(asci[i]-j)<65)
                    {
                        str[i]=asci[i]-j;
                        return;
                    }
                }
                else
                    j++;
           } 
        }
       printf("%s",str); 
    }
}