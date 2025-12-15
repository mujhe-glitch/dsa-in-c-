#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data; // 4 byte
    struct node *next;
} *head = NULL, *last = NULL;

void addNode(int data)
{
    struct node *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = data;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}
void displayList()
{
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        printf(" %d",p->data);
        p=p->next;
    }
}
void removeNode()
{
    struct node *p;
    p = head;
    while (p->next != last)
    {
        p=p->next;
    }
    p->next=NULL;
    free(last);
    last = p;
}
void removeFront()
{
    if(head==NULL)
    {
        printf("\nlist is empty");
        return;
    }
    struct node *tmp = head;
    head = head ->next;
    free(tmp);
    if(head==NULL)
    {
        last = NULL;
    }
}
void swap(){
    struct node *p,*q;
    int tmp;
    p=head;
   

    while(p!=NULL){
        if(p->next == NULL){
            break;
        }
        q = p->next;
        tmp = p->data; 
        p->data = q->data;
        q->data  = tmp; 
        p=q->next; 
    }
}
void searchNode(int num)
{
    int found = 0;
    struct node *i;

    i = head;
    while (i != NULL)
    {
        if (i->data == num)
        {
            found = 1;
            break;
        }
        i = i->next;
    }

    if (found == 1)
    {
        printf("\nFound");
    }
    else
    {
        printf("\nNot found");
    }
}
int main()
{

    // addNode(10);
    // addNode(20);
    // addNode(30);
    // addNode(40);
    // addNode(50);

    // printf(" %d  %d  %d  %d ",head->data,head->next->data,head->next->next->data,head->next->next->next->data);

    int choice,num;
    while (1)
    {
        printf("\n 0 for exit\n 1 for add node \n 2 for remove node \n 3 for display\n 4 for remove front\n 5 for search\n 6.swap");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Number ");
            scanf("%d",&num);
            addNode(num);
            break;
        case 2 :
            removeNode();
        case 3:
            displayList();
            break;
        case 4:
            removeFront();
            break;
        case 5 :
            printf("\nEnter the number that you want to search ");
            scanf("%d", &num);
            searchNode(num); // 10 20  30
            break;
            break;
        case 6 :
            swap();
            break;
        case 0:
            exit(0);
        }
    }
    
    return 0;
}