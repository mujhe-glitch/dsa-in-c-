#include <stdio.h>
#define S 10

int binarySearch(int a[], int search)
{

    int min, max, mid, flag = 0;

    min = 0;
    max = S - 1;

    while (max >= min)
    {
        mid = (min + max) / 2;

        printf("\nMy min = %d max = %d and Mid = %d", min, max, mid);

        if (a[mid] == search)
        {
            return mid;
        }
        else if (search > a[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // binarySearch(a, 60);
    // binarySearch(a, 20);
    binarySearch(a, 111);

    return 0;
}