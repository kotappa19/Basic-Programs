#include<stdio.h>
void BubbleSort(int n,int a[])
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void SelectionSort(int n,int a[])
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void InsertionSort(int n,int a[])
{
	for(int i=0;i<n-1;i++)
	{
		int key=a[i];
		int j=i-1;
		while(j>0 && key<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}		
void PrintArray(int n,int a[])
{
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
int main()
{
	int n,a[50],i;
	printf("Enter the number\t");
	scanf("%d",&n);
	printf("enter the number of elements\t");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("After applying Bubble sort\n");
	BubbleSort(n,a);
	PrintArray(n,a);
	printf("After applying selection sort\n");
	SelectionSort(n,a);
	PrintArray(n,a);
	printf("After applying insertion sort\n");
	InsertionSort(n,a);
	PrintArray(n,a);
}

			
