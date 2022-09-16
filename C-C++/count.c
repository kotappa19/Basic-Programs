#include<stdio.h>
int main()
{
	int a[10],n,i,count=0;
	printf("n=");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		count=count+1;
	}
	printf("the array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("count=%d\n",count);
}
