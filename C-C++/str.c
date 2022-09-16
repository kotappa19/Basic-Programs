#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char mainstr[100],patstr[100],tempstr[100],repstr[100];
int mi=0,pi=0,ri=0,ti=0,ci=0,flag=0;
void readstr();
void displaystr();
void patternstr();
int main()
{
	system("clear");
	readstr();
	system("clear");
	printf(" string before replace\n");
	displaystr();
	patternstr();
	printf(" string after replace\n");
	displaystr();

	
}
void readstr()
{
	printf("enter main string:  ");
	gets(mainstr);
	printf("enter sub string:  ");
	gets(patstr);
	printf("enter pattern string:  ");
	gets(repstr);
}
void displaystr()
{
	printf("\nmain string   ");
	puts(mainstr);
	printf("\npattern string  ");
	puts(patstr);
	printf("\nrepalcement string   ");
	puts(repstr);
	printf("\n");
}
void patternstr()
{
	
	while(mainstr[mi]!='\0')
	{
		while((mainstr[ci]==patstr[pi])&&((mainstr[ci]!='\0')&&(patstr[pi]!='\0')))
		{
			ci++;
			pi++;
		}
		if(patstr[pi]=='\0')
		{
			for(ri=0;repstr[ri]!='\0';ri++)
			{
				tempstr[ti]=repstr[ri];
				ti++;
			}
			pi=0;
			ri=0;
			mi=ci;
			flag=1;
		}
		else
		{
			tempstr[ti]=mainstr[mi];
			ti++;
			mi++;
			pi=0;
			ci=mi;
				
		}
	}
	tempstr[ti]='\0';
	for(ti=0;tempstr[ti]!='\0';ti++)
	{
		mainstr[ti]=tempstr[ti];
	}
	mainstr[ti]='\0';
	if(flag==0)
	{
		printf("string is not found   ");
		

	}
	
	
	
	
	
}





