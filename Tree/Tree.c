#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL;
int main()
{
    struct node *leftchild,*rightchild;
    root = malloc(sizeof(struct node));
    root->data = 100;
    root->left=NULL;
    root->right=NULL;

    leftchild=malloc(sizeof(struct node));
    leftchild->data=200;
    leftchild->left=NULL;
    leftchild->right=NULL;
    
    rightchild=malloc(sizeof(struct node));
    rightchild->data=300;
    rightchild->left=NULL;
    rightchild->right=NULL;

    root->left=leftchild;
    root->right=rightchild;

    printf("%d %d %d",root->data,root->left->data,root->right->data);

    return 0;
}

