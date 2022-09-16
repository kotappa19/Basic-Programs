#include<stdio.h>
#include<limits.h>
#define MAX 10
int stack[MAX];
int top1=-1,top2=MAX;
int isEmpty(int id)
{
	if(id==1)
	{
		if(top1==-1)
			return 1;
		else
			return 0;
	}
	else
	{
		if(top2==MAX)
			return 1;
		else
			return 0;
	}
}

int isFull()
{
	if(top1==top2-1)
		return 1;
	else
		return 0;
}

void Push(int ele,int id)
{
	if(id==1)
	{
	
		if(isFull())
		{
			printf("Stack 1 overflow");
			return;
		}
		else
			stack[++top1]=ele;
	}
	else
	{
		if(isFull())
		{
			printf("Stack 2 overflow");
			return;
		}
		else
		stack[--top2]=ele;
	}
}
	
void Display(int id)
{
	if(id==1)
	{
		if(isEmpty(1))
		{
			printf("Stack 1 is empty");
			return;
		}
		else
		{
			for(int i=top1;i>=0;i--)
				printf("%d\n",stack[i]);
		}
	}
	else
	{
		if(isEmpty(2))
		{
			printf("Stack 2 is empty");
			return;
		}
		else
		{
			for(int i=top2;i<MAX;i++)
				printf("%d\n",stack[i]);
		}
	}
}

int Peek(int id)
{
	if(id==1)
	{
		if(isEmpty(1))
		{
			printf("Stack 1 is empty");
			return INT_MIN;
		}
		else
			return stack[top1];
	}
	else
	{
		if(isEmpty(2))
		{
			printf("Stack 2 is empty");
			return INT_MIN;
		}
		else
			return stack[top2];
	}
}

int Pop(int id)
{
	if(id==1)
	{
		if(isEmpty(1))
		{
			printf("Stack 1 Underflow");
			return INT_MIN;
		}
		else
			return stack[top1--];
	}
	else
	{
		if(isEmpty(2))
		{
			printf("Stack 2 Underflow");
			return INT_MIN;
		}
		else
			return stack[top2++];
	}
}
		
int main()
{
	Push(10,1);
	Push(20,1);
	Push(30,2);
	Push(40,2);
	Push(50,1);
	Push(60,2);
	printf("\nStack 1\n");
	Display(1);
	printf("\nStack 2\n");
	Display(2);
	Pop(1);
	Pop(2);
	printf("\nStack 1\n");
	Display(1);
	printf("\nStack 2\n");
	Display(2);
	printf("top of stack 1 is %d\n",Peek(1));
	printf("top of stack 2 is %d\n",Peek(2));
}
