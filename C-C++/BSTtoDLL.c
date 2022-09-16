#include<stdio.h>
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

int main()
{
    struct BST *root=Node(key);

}