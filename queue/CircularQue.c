#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int q[SIZE];

int f = -1; // empty
int r = -1; // empty 

void insert(int num)
{

    if (r == SIZE - 1 && f == 0)
    {
        printf("\nQ is Full");
    }
    else if (r == f - 1)
    {
        printf("\nQ is Full");
    }
    else if (r == SIZE - 1)
    {
        // cq insert
        r = 0;
        q[r] = num;
    }
    else
    { // sq insert
        r++;
        q[r] = num;
        if (f == -1)
        {
            f = 0; // first time insertion
        }
    }
}

int removeElement()
{
    int del = q[f];
    if (f == -1)
    {
        return -1;
    }
    else
    {
        if (f == SIZE - 1)
        {
            f = 0;
        }
        else if (f == r)
        {
            // last element delete
            f = -1;
            r = -1;
        }
        else
        { // element delete
            f++;
        }
        return del;
    }
}

void display()
{
    int i;
    if (f > r)
    {
        printf("\n======Elements in Queue=======\n");
        for (i = f; i < SIZE; i++)
        {
            printf("  %d", q[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf("  %d", q[i]);
        }
    }
    else
    {
        printf("\n======Elements in Queue=======\n");
        for (i = f; i <= r; i++)
        {
            printf("  %d", q[i]);
        }
    }
}

int main()
{

    int choice;
    int num;

    while (1)
    {

        printf("\n0 For Exit\n1 For insert\n2 For Remove\n3 For Display");
        printf("\nEnter choice");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("\nEntern number");
            scanf("%d", &num);
            insert(num);
            break;
        case 2:
            num = removeElement();
            if (num == -1)
            {
                printf("\nQ is empty");
            }
            else
            {
                printf("\n%d removed", num);
            }
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }

    return 0;
}