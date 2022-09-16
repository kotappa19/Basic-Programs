#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
	int data;
	struct node *next;
};

struct queue
{
	struct node *front,*rear;
};

void EnQueue(struct queue *q,int new_data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=new_data;
	temp->next=NULL;
	if(temp==NULL)
	{
		printf("Queue is Full");
		return;
	}
	else if(q->rear ==NULL)
	{
		q->rear = q->front = temp;
		return;
	}
	q->rear->next=temp;
	q->rear=temp;
}	

int DeQueue(struct queue *q)
{
	if(q->front==q->rear)
	{
		printf("Queue is Empty");
		return INT_MIN;
	}
	else
	{
		struct node *p=q->front;
		q->front=q->front->next;
		free(p);
	}
}

int GetFront(struct queue *q)
{
	return q->front->data;
}

int GetRear(struct queue *q)
{
	return q->rear->data;
}
	
int main()
{
	struct queue *q=(struct queue *)malloc(sizeof(struct queue));
	q->front=NULL;
	q->rear=NULL;
	EnQueue(q,20);
	EnQueue(q,30);
	EnQueue(q,40);
	printf("the front of the queue is %d and rear of the queue is %d\n",GetFront(q),GetRear(q));
	DeQueue(q);
	printf("the front of the queue is %d and rear of the queue is %d\n",GetFront(q),GetRear(q));
}




















