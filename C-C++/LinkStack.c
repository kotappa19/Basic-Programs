#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
	int data;
	struct node *next;
}*top;

int isEmpty()
{
	if(top==NULL)
		return 1;
	else
		return 0;
}

void Push(int ele)
{
	struct node * ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Stack Underflow");
		return;
	}
	else
	{
		ptr->data=ele;
		ptr->next=top;
		top=ptr;
	}
}

int Pop()
{
	if(isEmpty())
	{
		printf("Stack Underflow");
		return INT_MIN;
	}
	else
	{
		struct node *ptr=top;
		top=ptr->next;
		free(ptr);
	}
}

void Display()
{
	if(isEmpty())
	{
		printf("Stack underflow");
		return;
	}
	else
	{
		struct node *ptr=top;
		while(ptr->next!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("%d\n",ptr->data);
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
		return top->data;
}

int main()
{
	Push(10);
	Push(20);
	Push(30);
	printf("\nAfter Pushing\n");
	Display();
	Pop();
	printf("\nAfter Popping\n");
	Display();
	printf("\nthe top of the stack is %d\n",Peek());
	
}
