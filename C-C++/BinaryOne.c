#include<stdio.h>
int Biggest(int a[],int n)
{
    int big=a[0];
    for(int i=1;i<n;i++)
        if(big<a[i])
            big=a[i];
    return big;
}
int main()
{
    int n,i=0,one_count=0,one_arr[10000],count_one[10000],len,count=0;
    scanf("%d",&n);
    while(n>0)
    {
        one_arr[i++]=n%2;
        n=n/2;
    }
    len=i;
    for(i=0;i<len;i++)
    {
        if(one_arr[i]==1)
            count++;
        count_one[i]=count;
        if(one_arr[i]!=1)
            count=0;
    }
    printf("%d\n",Biggest(count_one,len));
}