#include <stdio.h>

void printNum(int num)
{
    if (num == 0)
        return;  

    printNum(num - 1); 
    printf("%d ", num);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printNum(n);
    return 0;
}
