#include<stdio.h>
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("%d\t%d\n",x,y);
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\t%d\n",a,b);
	swap(a,b);
	printf("%d\t%d\n",a,b);
}
