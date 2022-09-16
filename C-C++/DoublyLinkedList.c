#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *rlink,*llink;
};

void display(struct node **first)
{
	struct node *ptr=*first;
	while(ptr->rlink!=NULL)
	{
		printf("%d<=>",ptr->data);
		ptr=ptr->rlink;
	}
	printf("%d\n",ptr->data);
}

void InsertFront(struct node **first,int new_data)
{
	struct node * new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->rlink=*first;
	new_node->rlink->llink=new_node;
	*first=new_node;
}

void InsertEnd(struct node **first,int new_data)
{
	struct node * new_node=(struct node*)malloc(sizeof(struct node));
	struct node *ptr=*first;
	new_node->data=new_data;
	while(ptr->rlink!=NULL)
	{
		ptr=ptr->rlink;
	}
	
	new_node->rlink=*first;
	new_node->rlink->llink=new_node;
	*first=new_node;
}
int main()
{
	struct node * first=(struct node*)malloc(sizeof(struct node));
	struct node * second=(struct node*)malloc(sizeof(struct node));
	first->data=40;
	second->data=50;
	first->llink=NULL;
	second->rlink=NULL;
	first->rlink=second;
	second->llink=first;
	InsertFront(&first,30);
	display(&first);
}

	
		
