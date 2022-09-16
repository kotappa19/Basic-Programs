#include<stdio.h>
int no_of_paths(int m, int n)
{
    if(m==1||n==1)
        return 1;
    else return (no_of_paths(m,n-1)+no_of_paths(m-1,n));
}
int main()
{
    int m,n,x=0;
    printf("m and n");
    scanf("%d%d",&m,&n);
    x=no_of_paths(m,n);
    printf("%d",x);
    return 0;
}