#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void InsertFront(struct node **first,int new_data)
{
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=new_data;
    if(*first==NULL)
    {
        *first=ptr;
        ptr->next=*first;
    }
    else
    {
        struct node *temp=*first;
        while(temp->next!=*first)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=*first;
        *first=ptr;
    }
}

void DeletionFront(struct node **first)
{
    if(*first==NULL)
        printf("list is empty");
    else
    {
        struct node *temp=*first,*ptr=*first;
        while(ptr->next!=*first)
        {
            ptr=ptr->next;
        }
        ptr->next=temp->next;
        *first=temp->next;
        temp->next=NULL;
        free(temp);
    }
}

void InsertionEnd(struct node **first,int new_data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=new_data;
    if(*first==NULL)
    {
        *first=ptr;
        ptr->next=*first;
    }
    else
    {
        struct node *temp=*first;
        while(temp->next!=*first)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=*first;
    }
}

void DeletionEnd(struct node **first)
{
    if(*first==NULL)
        printf("List is empty");
    else
    {
        struct node *prev,*ptr=*first;
        while(ptr->next!=*first)
        {
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=*first;
    }
}
void Display(struct node **first)
{
    if(*first==NULL)
        printf("list is empty");
    else
    {
        struct node *ptr=*first;
        while(ptr->next!=*first)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
        printf("%d\n",ptr->data);
    }
}

int main()
{
    struct node *first=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    first->data=10;
    second->data=20;
    first->next=second;
    second->next=first;
    InsertFront(&first,30);
    InsertFront(&first,40);
    DeletionFront(&first);
    InsertionEnd(&first,50);
    Display(&first);
}