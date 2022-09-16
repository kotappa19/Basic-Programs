#include<stdio.h>
#include<stdlib.h>
int main()
{
    char offset[5];
    int gmt,res=0;
    scanf("%d %s",&gmt,offset);
    if(gmt%100>60)
        printf("Error\n");
    else
    {
        char o=offset[0];
        int OffSet=atoi(offset);
        printf("%d\n",OffSet);
        if(o=='+')
        {
            res=gmt+OffSet;
            if(res>2360)
                res=res-2360;     
        }
        else if(o=='-')
        {
            res=OffSet+gmt;
            if(res%100==0)
                res=2400+res;
            else
                res=2360+res;
            if(res>2360)
            {
                res=res-2360;
            }
        }
        printf("%04d\n",res);
    }
}
