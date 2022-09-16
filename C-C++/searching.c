#include<stdio.h>
#include<math.h>
void LinearSearch(int n,int key,int a[])
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\nKey found\n");
	else
		printf("\nKey not found\n");
}

void BinarySearch(int n,int key,int a[])
{
	int low=0,high=n-1,mid,flag=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			flag=1;
			break;
		}
		else if(key<a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	if(flag==1)
		printf("\nKey found\n");
	else
		printf("\nKey not found\n");
}
		
/*void JumpSearch(int n,int key,int a[])
{
    int step = sqrt(n);
    int low = 0,high = low + step;
    int flag=0;
    while(a[high]<key)
    {
 
        low+=step;
        high+=step;
    }
    while(low<high)
    {
        if(a[low]==key)
        {
            flag=1;
            break;
    	}
    	low++;
    }
    if(flag==1)
    	printf("key found");
   else
   printf("key not found");
}*/			
									
int main()
{
	int n,a[50],i,key;
	printf("Enter the number\t");
	scanf("%d",&n);
	printf("enter the number of elements\t");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the key element\t");
	scanf("%d",&key);
	LinearSearch(n,key,a);
	BinarySearch(n,key,a);
	//JumpSearch(n,key,a);
}
