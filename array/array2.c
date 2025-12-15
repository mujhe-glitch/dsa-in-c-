#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int a[SIZE];
void inputArray(int location, int value)
{
    int index = location - 1;
    int i;
    for (i = SIZE - 2; i >= index; i--)
    {
        a[i + 1] = a[i]; // 4 = 3
    }
    a[index] = value;
}

void printArray()
{
    printf("Array elements are: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void removeValue(int location)
{
    int i;
    for(i=location-1;i<SIZE;i++)
    {
        a[i] = a[i+1];
    }
}
void bubbleSort()
{
    int i,x;
    int temp,c=0;
    for(x=0;x<SIZE;x++)
    { 
        for(i=0;i<SIZE;i++)
        {
            c++;
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    printf("\nCount : ",c);
}
int main()
{

    int choice;
    int location, value;

    while (1)
    {
        printf("\n0 Exit\n1 Input\n2 Display\n3 Sort\n4 Remove\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
            case 0:
                exit(0);
        
            case 1:
                printf("\nEnter location");
                scanf("%d", &location);
                printf("\nEnter value");
                scanf("%d", &value);
                inputArray(location, value);
                break;

            case 2:
                printArray();
                break;
            case 4 :
                removeValue(location);
                break;
            case 3 :
                bubbleSort();
            default:
                break;
        }
    }
    return 0;
}
