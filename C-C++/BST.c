#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct BST
{
    int data;
    struct BST *left,*right;
};

struct BST *Node(int data)
{
    struct BST *temp=(struct BST *)malloc(sizeof(struct BST));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void InOrder(struct BST * root)
{
    if(root==NULL)
        return;
    else
    {
        InOrder(root->left);
        printf("%d\t",root->data);
        InOrder(root->right);
    }
}

void PreOrder(struct BST *root)
{
    if(root==NULL)
        return;
    else
    {
        printf("%d\t",root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void display(struct BST *root)
{
	struct BST *ptr=root;
	while(ptr->right!=NULL)
	{
		printf("%d<=>",ptr->data);
		ptr=ptr->left;
	}
	printf("%d\n",ptr->data);
}

void BSTtoDLL(struct BST *root)
{
    int a[10000];
    int i=0;
    if(root==NULL)
        return;
    else
    {
        InOrder(root->left);
        a[i++]=root->data;
        InOrder(root->right);
    }
    int len=i;
    printf("%d",len);
    for(i=len-1;i>=0;i--)
    {
        struct BST *temp=Node(a[i]);
        if(root==NULL)
            root=temp;
        else
        {
            temp->data=a[i];
            temp->right=root;
            temp->left->right=temp;
            root=temp;
        }   
    }
    display(root);
}

void PostOrder(struct BST *root)
{
    if(root==NULL)
        return;
    else
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d\t",root->data);
    }
}

struct BST *Insert(struct BST *root,int key)
{
    if(root==NULL)
        return Node(key);
    else if(key<root->data)
        root->left=Insert(root->left,key);
    else if(key>root->data)
        root->right=Insert(root->right,key);
    return root;
}

int Search(struct BST *root,int key)
{
    if(root==NULL)
        return 0;
    else if(key==root->data)
        return 1;
    else
    {
        if(key<root->data)
            Search(root->left,key);
        else if(key>root->data)
            Search(root->right,key);
    }
}

struct BST *MinValue(struct BST *root)
{
    struct BST *temp=root;
    while(temp && temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

struct BST *Delete(struct BST *root,int key)
{
    if(root==NULL)
         return root;
    if(key<root->data)
            root->left=Delete(root->left,key);
    else if(key>root->data)
            root->right=Delete(root->right,key);
    else
    {
        if(root->left==NULL && root->right==NULL)
            return NULL;
        else if(root->left==NULL)
        {
            struct BST *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            struct BST *temp=root->left;
            free(root);
            return temp;
        }
        else
        {
            struct BST *temp=MinValue(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,root->data);
        }
    }
    return root;
}

int main()
{
    struct BST *root=Node(50);
    root->left=Node(40);
    root->right=Node(60);
    root=Insert(root,30);
    root=Insert(root,45);
    root=Insert(root,55);
    root=Insert(root,65);
    // root=Delete(root,40);
    printf("\nAfter InOrder Traversal\n");
    InOrder(root);
    printf("\nAfter PreOrder Traversal\n");
    PreOrder(root);
    printf("\nAfter PostOrder Traversal\n");
    PostOrder(root);
    if(Search(root,40))
        printf("\nkey element found \n");
    else
        printf("\nkey element not found\n");
    BSTtoDLL(root);
}