#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int data)
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if (data > root->data)
        {
            root->right = addNode(root->right, data);
        }
        else
        {
            root->left = addNode(root->left, data);
        }
    }
    return root;
}
void inOrder(struct node *root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d " , root->data);
    }
}
   /*
                    40

            30              50
        
        25      35      45      60   
    
    
    */
void preOrder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int Search(struct node* root,int key){
    if(root!=NULL){
        if(root->data==key){
            return 1;
        }else if(key > root->data){
            Search(root->right,key);
        }else{
            Search(root->left,key);
        }
    }
}
int max(struct node *root){
    if(root==NULL){
        printf("\nTree is Empty");
        return -1;
    }
    while (root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
    
}
int min(struct node *root){
    if(root == NULL){
        printf("Tree is empty");
        return -1;
    }
    while(root->left != NULL){
        root = root->left;
    }
    return root->data;
}
int main()
{
    // struct node *root = NULL;
    // root = addNode(root, 40);
    // addNode(root, 30);
    // addNode(root, 50);
    // addNode(root, 25);
    // addNode(root, 35);
 
    // addNode(root, 60);
    // addNode(root, 45);

    // // printf(" %d %d %d %d", root->data, root->left->data, root->right->data, root->right->right->data); // 50 25 100 150

    // printf("\nInorder => ");
    // inOrder(root); //
    // printf("\nPre Order => ");
    // preOrder(root);
    // printf("\nPost Order => ");
    // postOrder(root);

 
    struct node *root =NULL;
    int choice,val;
    while (1)
    {
        printf("\n1. insert the node ");
        printf("\n2. Inorder ");
        printf("\n3. Pre Order ");
        printf("\n4. Post Order ");
        printf("\n5. Search the Node ");
        printf("\n6. Find the Minimum node ");
        printf("\n7. Find the Maximum node ");
        printf("\n8. Exit \n");
        scanf(" %d",&choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the Value to insert : ");
            scanf("%d",&val);
            root = addNode(root,val);
            printf("\n Value inserted");
            break;
        case 2:
            printf("\nInorder : ");
            inOrder(root);
            printf("\n");
            break;
        case 3:
            printf("\nPre Order : ");
            preOrder(root);
            printf("\n");
            break;
        case 4:
            printf("\nPost Order");
            postOrder(root);
            printf("\n");
            break;
        case 5 :
            printf("\n Enter Value to Search the Node : ");
            scanf("%d",&val);
            if(Search(root,val)){
                printf("\nFound");
            
            }else{
                printf("\n Not Found");
            }
            break;
        case 6:
            printf("\nMinimum : %d ",min(root));
            break;
        case 7:
            printf("\nMaximum : %d ",max(root));
            break;
        case 8:
            printf("\nExiting");
            exit(0);
            
        default:
            break;
        }

    }
    
    
    return 0;
}