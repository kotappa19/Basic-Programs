#include<stdio.h>
#include<math.h>
int JumpSearch(int a[],int n,int key){
    int step = sqrt(n);
    int low = 0,high = low + step;
    int flag=0;
    //printf("%d\n",step);
    while(a[high]<key){
        //printf("%d\n",a[high]);
        low+=step;
        high+=step;
    }
    while(low<high){
        if(a[low]==key){
            flag=1;
            break;
        }
        low++;
    }
    return flag;
}
void main(){
    int n,key;
    printf("Enter the number of array elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be found\n");
    scanf("%d",&key);
    int result = JumpSearch(a,n,key);
    if(result)
        printf("The element is found\n");
    else
        printf("The elements is not found\n");
}