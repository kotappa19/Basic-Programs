#include<stdio.h>
#include<limits.h>
#define MAX 5
int stack[MAX];
int top=-1;
int isFull()
{
	if(top==MAX-1)
		return 1;
	else
		return 0;
}

int isEmpty()
{
	if(top==-1)
		return 1;
	else 
		return 0;
}

void Push(int ele)
{
	if(isFull())
	{
		printf("Stack overflow");
		return;
	}
	else
		stack[++top]=ele;
}

int Pop()
{
	if(isEmpty())
	{
		printf("Stack Underflow");
		return INT_MIN;
	}
	else
		return stack[top--];
}

void Display()
{
	if(isEmpty())
	{
		printf("Stack Underflow");
		return;
	}
	else
	{
		for(int i=top;i>=0;i--)
			printf("%d\n",stack[i]);
	}
}

int Peek()
{
	if(isEmpty())
	{
		printf("Stack Underflow");
		return INT_MIN;
	}
	else
		return stack[top];
}

int main()
{
	Push(10);
	Push(20);
	Push(30);
	Display();
	printf("\nAfter popping\n");
	Pop();
	Display();
	printf("\nthe top of the stack is  %d\n",Peek());
	return 0;
}
