#include<stdio.h>
int main(){
    int a[5],b[5];
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<5;i++)    
        scanf("%d",&b[i]);
    int big=a[0],j,k;
    for(int i=1;i<5;i++){
        if(a[i]>big){
            big=a[i];
            k=i;
        }
    }
    int sbig=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>sbig && a[i]<big){
            sbig=a[i];
            j=i;
        }
    }
    int res=(b[k]+b[j]);
    return res;

}