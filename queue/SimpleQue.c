#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int q[SIZE];
int f=-1,r=-1;

void enQueue(int num)
{
    if(r==SIZE-1)
    {
        printf("\nQueue is Full  %d",num);
    }
    else
    {
        r++;
        q[r] = num;
        if(f==-1)
        {
            f=0;
        }
    }
}
void deQueue()
{
    if(f==-1)
    {
        printf("\nQueue is Empty");
    }
    else if (f==r)
    {
        printf("%d removed ",q[f]);
        f=-1;
        r=-1;
    }
    else
    {
        printf("%d removed",q[f]);
        f++;
    }
}
void display()
{
    for(int i=f;i<=r;i++)
    {
        printf(" %d",q[i]);
    }
}
int main()
{
    int ch,num;
    while (1)
    {
        printf("\n1.enQueue\n2.deQueue\n3.display\n4.Exit   \nEnter Your Choice ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the number ");
            scanf("%d",&num);
            enQueue(num);
            break;
        case 2 :
            deQueue();
            break;
        case 3:
            display();
            break;
        case 4 : 
            exit(0);
         break;
        }
    }
    return 0;
}