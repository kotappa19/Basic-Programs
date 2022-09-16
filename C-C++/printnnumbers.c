#include<stdio.h>
int print(int n,int temp)
{
    
    if(temp>n)
    {
        return 0;
    }
    else 
    {
        printf("%d",temp);
        print(n,temp+1);
    }
}
int main()
{
    int n,temp=1;
    printf("n=");
    scanf("%d",&n);
    print(n,temp);
}