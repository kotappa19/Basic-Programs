#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y;
    printf("n=");
    scanf("%d",&n);
    x=sqrt((5*n*n)+4);
    y=sqrt((5*n*n)-4);
    x=x*x;
    y=y*y;
    if(x==((5*n*n)+4) || y==((5*n*n)-4))
        printf("%d is a fibonacci number",n);
    else
        printf("%d is not a fibonacci number",n);

}