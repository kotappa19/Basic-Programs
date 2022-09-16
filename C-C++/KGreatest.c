#include<stdio.h>
void BubbleSort(int a[],int n)
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

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    BubbleSort(a,n);
    for(int i=n-1;i>=n-k;i--)
        printf("%d\t",a[i]);
    printf("\n");
}
