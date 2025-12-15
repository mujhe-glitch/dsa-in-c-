#include<stdio.h>
#define SIZE 5
int a[] = {25,10,3,17,28};


void printArray()
{
    printf("Array elements are: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void selectionSort()
{
    int i,j,min,temp;
    for(i=0;i<SIZE;i++)
    {
        min = i;
        for(j=i+1;j<SIZE;j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] =a[min];
        a[min] = temp;
    }
}
int main ()
{
    printArray();
    selectionSort();
    printArray();
    return 0;
}