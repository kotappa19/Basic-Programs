#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
struct stack
{
	int *a,top,size;
};

struct stack *initialise(int si)
{
	struct stack * s=(struct stack *)malloc(sizeof(struct stack));
	s->top=-1;
	s->size=si;
	s->a=(int *)malloc(si*sizeof(int));
}

int isFull(struct stack *s)
{
	if(s->top==s->size-1)
		return 1;
	else 
		return 0;
}

int isEmpty(struct stack *s)
{
	if(s->top==-1)
		return 1;
	else
		return 0;
}

void Push(struct stack *s,int ele)
{
	if(isFull(s))
	{
		printf("Stack Overflow");
		return;
	}
	else
		s->a[++s->top]=ele;
}

int Pop(struct stack *s)
{
	if(isEmpty(s))
	{
		printf("Stack Underflow");
		return INT_MIN;
	}
	else
		return s->a[s->top--];
}

int Peek(struct stack *s)
{
	if(isEmpty(s))
	{
		printf("Stack Underflow");
		return INT_MIN;
	}
	else
		return s->a[s->top];
}

void Display(struct stack *s)
{
	if(isEmpty(s))
	{
		printf("Stack Underflow");
		return;
	}
	else
	{
		for(int i=s->top;i>=0;i--)
			printf("%d\n",s->a[i]);
	}
}

int main()
{
	struct stack *s1;
	s1=initialise(5);
	Push(s1,10);
	Push(s1,20);
	Push(s1,30);
	printf("\nAfter Push opertaion\n");
	Display(s1);
	Pop(s1);
	printf("\n After pop opertation\n");
	Display(s1);
	printf("\nThe top of the stack is %d\n",Peek(s1));
}
	

