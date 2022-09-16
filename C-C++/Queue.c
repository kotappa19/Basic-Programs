#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct queue
{
	int front,rear,capacity,size,*a;
};

struct queue *initialise(int c)
{
	struct queue *ptr=(struct queue*)malloc(sizeof(struct queue));
	ptr->front=0;
	ptr->rear=c-1;
	ptr->capacity=c;
	ptr->size=0;
	ptr->a=(int *)malloc(c*sizeof(int));
}

void EnQueue(struct queue *q,int data)
{
	if(q->size==q->capacity)
	{
		printf("Queue is full");
		return;
	}
	else
	{
		q->rear=(q->rear+1)%q->capacity;
		q->a[q->rear]=data;
		q->size++;
	}
}

int DeQueue(struct queue *q)
{
	if(q->size==0)
	{
		printf("Queue is Empty");
		return INT_MIN;
	}
	else
	{
		int data=q->a[q->front];
		q->front=(q->front+1)%q->capacity;
		q->size--;
		return data;
	}
}
		
int GetFront(struct queue *q)
{
	return q->a[q->front];
}

int GetRear(struct queue *q)
{
	return q->a[q->rear];
}

int main()
{
	struct queue *temp=initialise(10);
	EnQueue(temp,10);
	EnQueue(temp,20);
	EnQueue(temp,30);
	printf("\nthe front of the queue is %d and the rear of the queue is %d\n",GetFront(temp),GetRear(temp));
	DeQueue(temp);
	printf("\nthe front of the queue is %d and the rear of the queue is %d\n",GetFront(temp),GetRear(temp));
		
}
