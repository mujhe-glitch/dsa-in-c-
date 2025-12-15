#include <stdio.h>
#define SIZE 5
// int a[] = {1, 2, 3, 4, 5};
int a[5] = {5, 4, 3, 2, 1}; // 20 10
// int a[] = {15,6,90,8,17};

void bubbleSort()
{
    int i, x;
    int tmp;
    // n=> 5*5 =>25
    int count = 0;
    for (x = 0; x < SIZE; x++) // SIZE {0 1 2 3 4} 5
    {
        for (i = 0; i < SIZE; i++) // SIZE {0 1 2 3 } 4
        {
            count++;
            if (a[i] > a[i + 1])
            {
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
        }
    }
    // SIZE*SIZE
    // O(n*n)
    // O(n^2)
    for(i=0;i<a[5];i++)
    {
        printf("%d",&a[i]);
    }
    // printf("\n Count = %d", count);
}

void bubbleSort2()
{
    int i, x;
    int tmp;
    // n=> 5*5 =>25
    int count = 0;
    int swap = 1;
    for (x = 0; x < SIZE && swap == 1; x++) // SIZE {0 1 2 3 4} 5
    {
        swap = 0;
        for (i = 0; i < SIZE - 1 - x; i++) // SIZE {0 1 2 3 } 4
        {
            count++;
            if (a[i] > a[i + 1])
            {
                swap = 1;
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
        }
    }
    // SIZE*SIZE
    // O(n*n)
    // O(n^2)

    printf("\n Count = %d", count);
}

int main()
{

    bubbleSort2(); //
    return 0;
}