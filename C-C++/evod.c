#include<stdio.h>
int main()
{
	int n,a[19],i,even=0,odd=0;
	printf("n=");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even=even+1;
		}
		else
		{
			odd=odd+1;
		}
	}
	printf("the array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("total even numbers are %d\n",even);
	printf("total odd numberS are %d\n",odd);
}
