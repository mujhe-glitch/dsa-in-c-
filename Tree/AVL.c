#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int calculateHeight(struct node *root)
{
    int lh = 0;
    int rh = 0;

    if (root->left != NULL)
    {
        lh = root->left->height;
    }
    if (root->right != NULL)
    {
        rh = root->right->height;
    }

    if (lh > rh)
        return lh + 1;
    else
        return rh + 1;
}

int calculateBF(struct node *root)
{
    int lh = 0;
    int rh = 0;

    if (root->left != NULL)
    {
        lh = root->left->height;
    }
    if (root->right != NULL)
    {
        rh = root->right->height;
    }

    return lh - rh;
}

struct node *addNode(struct node *root, int data) // 100 , 150
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->height = 1; //
    }
    else if (data < root->data)
    {
        // left
        root->left = addNode(root->left, data);
    }
    else if (data > root->data)
    {
        // right
        root->right = addNode(root->right, data);
    }

    root->height = calculateHeight(root);

     int bf = calculateBF(root);

     if(bf < -1){
        printf("\n%d RIGHT IMBALANCE",root->data);
     }
     if(bf > 1){
        printf("\n%d LEFT IMBALANCE",root->data);
        
     }
    return root;
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d:(%d)", root->data, root->height);
        inOrder(root->right);
    }
}

int main()
{

    struct node *first = NULL;

    // first = addNode(first, 100);
    // addNode(first, 150);
    // addNode(first, 50);
    // addNode(first, 10);
    // addNode(first, 300);
    // addNode(first, 120);

    // printf("==>");
    // inOrder(first); // 10 50 100 120 150 300

    first = addNode(first, 500);
    first = addNode(first, 400);
    first = addNode(first, 300);

    return 0;
}