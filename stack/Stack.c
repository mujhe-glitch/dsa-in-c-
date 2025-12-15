#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

void push(int num)
{
    if (top == SIZE - 1)
    {
        printf("\nSTACK OVERFLOW");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nSTACK UNDERFLOW");
    }
    else
    {
        printf(" %d", stack[top]);
        top--;
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n %d", stack[i]);
    }
}

int main()
{

    int choice;
    int num;
    while (-1)
    {
        printf("\n1 For PUSH");
        printf("\n2 For POP");
        printf("\n3 For DISPLAY");
        printf("\n4 For EXIT");
        printf("\n1 Enter choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter number ");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}