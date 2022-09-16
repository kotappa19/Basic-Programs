#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=0,j=n-1,temp;
    while(l<=j){
        temp=a[l];
        a[l]=a[j];
        a[j]=temp;
    }
    for(int k=0;k<n;k++){
        a[k]*=k;
        printf("%d",a[k]);
    }
}