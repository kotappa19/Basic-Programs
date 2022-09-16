#include<stdio.h>
#include<stdlib.h>
void read(int [],int *);
void push(int [],int *,int );
int pop(int [],int *);
void display(int [],int *);
int overflow(int [],int *);
int underflow(int [],int *);
void palindrome();
#define MAX 100
int ch,stack[MAX],top=-1,ele,n,i;
int main()
{
	while(1)
	{
		printf("1=read\n 2=push\n 3=pop\n 4=display\n 5=check for palindrome\n 6=exit\n");
		printf("\nenter the choice:  ");
		scanf("%d",&ch);
		switch(ch)
		{
			
			case 1:read(stack,&top);
				break;
			case 2:if(overflow(stack,&top))
				{
					printf("stack is full\n");
				}
				else
				{
					printf("element=  ");
					scanf("%d",&ele);
					push(ele,stack,&top);
				}
				break;
			case 3:if(underflow(stack,&top))
				{
					printf("stack is empty\n");
				}
				else
				{
					ele=pop(stack,&top);
				        printf("popped element is %d\n",ele);
				}
				break;
			case 4:if(underflow(stack,&top))
				{
					printf("stack is empty\n");
				}	
				else
				{
				display(stack,&top);
				}
				break;
			case 5:palindrome();
				break;
			case 6:exit(0);
		}
	}
}
void push(int stack[],int *top,int ele)
{
	(*top)++;
	stack[*top]=ele;
}
int pop(int stack[],int *top)
{
	ele=stack[*top];
	(*top)--;
	return ele;	
}
int overflow(int stack[],int *top)
{
	if(*top==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int underflow(int stack[],int *top)
{
	if(*top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void display(int stack[],int *top)
{
	printf("the stack is:  ");
	for(i=*top;i>=0;i--)
	{
		printf("%d\t",stack[i]);
	}
	printf("\n");
}
void read(int stack[],int *top)
{
	printf("n=");
	scanf("%d",&n);
	
	if(n>MAX)
	{
		printf("exceeds the limit\n");
	}
	else
	{
		printf("enter the stack elements");
		for(*top=-1;*top<n-1;)
		{
			(*top)++;
			scanf("%d",&stack[*top]);
		
		}
		
		
	}
}
void palindrome()
{
	
	int stack1[MAX],stack2[MAX],top1=-1,top2=-1,x,y,z,item,n,i,flag=1,a,b;
	printf("enter the size of the stack");
	scanf("%d",&n);
	printf("enter the stack elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&item);
		push(stack1,&top1,item);
	}
	y=top1;
	z=top1/2;
	for(i=y;i>z;i--)
	{
		x=pop(stack1,&top1);
		push(stack2,&top2,x);
	}
	if(y%2==0)
	{
		x=pop(stack1,&top1);
	}
	while((top1>-1)&&(top2>-1))
	{
		a=pop(stack1,&top1);
		b=pop(stack2,&top2);
		if(a!=b)
		{
			flag=0;
			break;
		}
		
	}
	if(flag==0)
	{
		printf("stack is not a palindrome\n");
	}
	else
	{
		printf("stack is a palindrome\n");
	}
		
}	

		
