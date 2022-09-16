#include<stdio.h>
#include<stdlib.h>
void read();
int push();
int pop();
void display();
int overflow();
int underflow();
#define MAX 10
int ch,stack1[MAX],stack2[MAX],top1=-1,top2=-1,ele,n,i;
int main()
{
	while(1)
	{
		printf("1=read satck1\n 2=read stack2\n 3=push satck1\n 4=push stack2\n 5=pop stack1\n 6=pop stack2\n 7=dispaly stack1\n 8=display stack2\n 9=exit\n");
		printf("\nenter the choice:  ");
		scanf("%d",&ch);
		switch(ch)
		{
			
			case 1:read(stack1,&top1);
				break;
			case 2:read(stack2,&top2);
				break;
			case 3:if(overflow(stack1,&top1))
				{
					printf("stack is full\n");
				}
				else
				{
					printf("element=  ");
					scanf("%d",&ele);
					push(ele,stack1,&top1);
				}
				break;
			case 4:
				if(overflow(stack2,&top2))
				{
					printf("stack is full\n");
				}
				else
				{
					printf("element=  ");
					scanf("%d",&ele);
					push(ele,stack2,&top2);
				}
				break;
			case 5:if(underflow(stack1,&top1))
				{
					printf("stack is empty\n");
				}
				else
				{
					ele=pop(stack1,&top1);
				        printf("popped element is %d\n",ele);
				}
				break;
			case 6:if(underflow(stack2,&top2))
				{
					printf("stack is empty\n");
				}
				else
				{
					ele=pop(stack2,&top2);
				        printf("popped element is %d\n",ele);
				}
				break;
			case 7:if(underflow(stack1,&top1))
				{
					printf("stack is empty\n");
				}	
				else
				{
					display(stack1,&top1);
				}
				break;
			case 8:if(underflow(stack2,&top2))
				{
					printf("stack is empty\n");
				}	
				else
				{
					display(stack2,&top2);
				}
				break;
			case 9:exit(0);
		}
	}
}
int push(int ele,int stack[],int *top)
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
int overflow(int stack,int *top)
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
int underflow(int stack,int *top)
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
		for(*top=0;*top<n;(*top)++)
		{
			
			scanf("%d",&stack[*top]);
		
		}
		(*top)--;
		
		
	}
}
		
