#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int *p;
    int *arr;
    p = malloc(sizeof(int));
    arr = calloc(10,sizeof(int));

    printf("Enter a number ");
    scanf("%d",p);

    printf("Enter 3 number");
    for (int i=0;i<3;i++) 
    {
        printf("arr[%d] ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nValue by malloc : %d\n", *p);

    printf("Values by calloc :\n");
    for (int i=0;i<3;i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(p);
    free(arr);
    return 0;
}