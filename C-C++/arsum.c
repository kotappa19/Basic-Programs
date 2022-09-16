#include<stdio.h>
int main()
{
int n,i,a[20],sum=0;
printf("n=");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
sum=sum+a[i];}
printf("the array elements are:");
for(i=0;i<n;i++){
printf("%d\n",a[i]);}
printf("sum=%d\n",sum);
}
