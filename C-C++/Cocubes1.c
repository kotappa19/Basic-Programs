#include<stdio.h>
int Distance(int x,int r,int t)
{
    return (x+r)*t;
}
int main()
{
    int x,r,t;
    scanf("%d %d %d",&x,&r,&t);
    printf("%d\n",Distance(x,r,t));
}