#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[5],n,i;
void readarray();
void printarray();
void insertarray();
void deletearray();
int main()
{
	printf("n=");
	scanf("%d",&n);
	readarray();
	printarray();
	insertarray();
	printarray();
	deletearray();
	printarray();
}
void readarray()
{
	if(n>MAX)
	{
		printf("overflow\n");
		exit(0);
	}
	else
	{
		if(n!=0)
		{
			printf("enter the array elements:");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
		}
	}
}
void printarray()
{
	if(n==0)
	{
		printf("empty array\n");
	}
	else
	{
		printf("the array elements are:");
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}
void insertarray()
{
	if(n==MAX)
	{
		printf("insufficient memeory\n");
		exit(0);
	}
	else
	{
		int pos,item;
		printf("item=");
		scanf("%d",&item);
		printf("pos=");
		scanf("%d",&pos);
		for(i=n-1;i>=pos;i--)
		{
			a[i+1]=a[i];
		
		}
		a[pos]=item;
		n++;
	}
}
void deletearray()
{
	
	
		int pos;
		if(n==0)
		{
			printf("empty array\n");
		}
		else
		{
			printf("pos=");
			scanf("%d",&pos);
			if(pos<n)
			{
				printf("the deleted element is %d\n",a[pos]);
				for(i=pos;i<n-1;i++)
				{
					a[i]=a[i+1];
				}
				n--;
			}
			else
			{
				printf("invalid position\n");
			}
		 }
	
}	
