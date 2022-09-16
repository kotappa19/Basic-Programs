#include<stdio.h>
#include<stdlib.h>
void main(){
          char str[100];
          int freq[256]={0};
          printf("Enter the string:\n");
          scanf("%s",str);
          int i,n=0,flag=0,x;
          for(i=0;str[i];i++){
                freq[str[i]]++;
          }
          for(i=0;str[i];i++){
                    if(freq[str[i]]!=0){
                              printf("%c=%d\n",str[i],freq[str[i]]);
                              freq[str[i]]=0;
                    }
          }
          
}
