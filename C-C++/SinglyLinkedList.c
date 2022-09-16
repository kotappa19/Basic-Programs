#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * link;
};

void Print(struct node *Node)
{
	struct node * ptr;
	ptr=Node;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}

void InsertionFront(struct node **first,int new_data)
{
	struct node * new_node=(struct node *)malloc(sizeof(struct node));
	if(*first==NULL)
		*first=new_node;
	else
	{
		new_node->data=new_data;
		new_node->link=*first;
		*first=new_node;
	}
}

void InsertionLast(struct node **first,int new_data)
{
	struct node * new_node=(struct node *)malloc(sizeof(struct node));
	if(*first==NULL)
		*first=new_node;
	else
	{
		new_node->data=new_data;
		struct node *ptr=*first;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=new_node;
		new_node->link=NULL;
	}
}

void InsertionAfterNode(struct node **first,int new_data,int key)
{
	struct node * new_node=(struct node *)malloc(sizeof(struct node));
	if(*first==NULL)
		*first=new_node;
	else
	{	
		struct node * ptr=*first;
		new_node->data=new_data;
		while(ptr->data!=key)
		{
			ptr=ptr->link;
		}
		new_node->link=ptr->link;
		ptr->link=new_node;
	}
}

void DeletionFront(struct node **first)
{
	if(*first==NULL)
		printf("Cant Delete");
	else
	{
		struct node * ptr=*first;
		*first=ptr->link;
		ptr->link=NULL;
		free(ptr);
	}
}

void DeletionEnd(struct node **first)
{
	if(*first==NULL)
		printf("Cant Delete");
	else
	{
		struct node * ptr=*first;
		struct node * prev;
		while(ptr->link!=NULL)
		{	
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=NULL;
		free(ptr);
	}
}

void DeletionAfterNode(struct node **first,int key)
{
	struct node * ptr=*first;
	struct node * prev=*first;
	if(*first==NULL)
		printf("Cant Delete");
	else
	{
		struct node * ptr=*first;
		struct node * prev;
		while(ptr->data!=key)
		{	
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=ptr->link;
		ptr->link=NULL;
		free(ptr);
	}
}

void Swap(struct node **first,int data1,int data2)
{	
	struct node *prev1=NULL,*cur1=*first,*prev2=NULL,*cur2=*first,*temp;
	if(*first==NULL)
		printf("List is Empty");
	else if(data1==data2)
		return;
	else
	{
		while(cur1 && cur1->data!=data1)
		{
			prev1=cur1;
			cur1=cur1->link;
		}
		while(cur2 && cur2->data!=data2)
		{
			prev2=cur2;
			cur2=cur2->link;
		}
		if(cur1==NULL||cur2==NULL)
			return;
		if(prev1!=NULL)
			prev1->link=cur2;
		else
			*first=cur2;
		if(prev2!=NULL)
			prev2->link=cur1;
		else
			*first=cur1;
		temp=cur2->link;
		cur2->link=cur1->link;
		cur1->link=temp;		
	}
}	
int main()
{
	struct node * Node1=(struct node *)malloc(sizeof(struct node));
	struct node * Node2=(struct node *)malloc(sizeof(struct node));
	Node1->data=10;
	Node1->link=Node2;
	Node2->data=20;
	Node2->link=NULL;
	InsertionFront(&Node1,5);
	InsertionLast(&Node1,30);
	InsertionAfterNode(&Node1,25,20);
	DeletionFront(&Node1);
	DeletionEnd(&Node1);
	DeletionAfterNode(&Node1,20);
	InsertionLast(&Node1,40);
	InsertionLast(&Node1,50);
	InsertionLast(&Node1,60);
	InsertionLast(&Node1,2);
	InsertionLast(&Node1,1);
	DeletionAfterNode(&Node1,25);
	Swap(&Node1,10,40);
	Print(Node1);
}


