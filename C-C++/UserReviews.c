#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=30 && n<=50)
        printf("Average\n");
    else if(n>30 && n<=60)
        printf("Good\n");
    else if(n>60 && n<=80)
        printf("Excellent\n");
    else if(n>80 && n<=100)
        printf("OutStanding\n");
}