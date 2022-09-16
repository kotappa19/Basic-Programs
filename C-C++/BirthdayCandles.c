#include<stdio.h>
int main()
{
    int no_of_candles,big=0,candles_count=0;
    scanf("%d",&no_of_candles);
    int candles[no_of_candles];
    for(int i=0;i<no_of_candles;i++)
        scanf("%d",&candles[i]);
    big=candles[0];
    for(int i=1;i<no_of_candles;i++)
        if(big<candles[i])
            big=candles[i];
    for(int i=0;i<no_of_candles;i++)
        if(big==candles[i])
            candles_count++;
    printf("%d\n",candles_count);
}