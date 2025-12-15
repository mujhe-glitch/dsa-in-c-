
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

struct Node* head = NULL;
struct Node* prev = NULL;

void convertToList(struct Node* root) {
    if (root == NULL)
        return;

    convertToList(root->left);

    if (prev == NULL)
        head = root;
    else
        prev->right = root;

    root->left = NULL;
    prev = root;

    convertToList(root->right);
}

void printList(struct Node* head) {
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->right;
    }
    printf("NULL\n");
}

int main() {
    struct Node* root = NULL;

    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 10);
    root = insert(root, 1);
    root = insert(root, 6);

    convertToList(root);

    printList(head);

    return 0;
}
