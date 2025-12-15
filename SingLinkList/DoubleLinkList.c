#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*last=NULL;
void addNode(int data)
{
    struct node *tmp;
    if(head==NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else{
        tmp = malloc(sizeof(struct node));
        tmp->data=data;
        tmp->next=NULL;
        tmp->prev=last;
        last->next=tmp;
        last=tmp;
    }
}
int main()
{
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);

}