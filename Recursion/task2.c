#include <stdio.h>

// print 1 to 5 numbers using recursion
//  no global variable

void printNum(int num)
{                       
    printf("%d ", num); 
    num++;              
    if (num != 6)
        printNum(num);
}

int counter = 0;

void greet()
{
    printf("Good Noon\n");
    counter++; // 2
    if (counter != 5)
        greet();
}

int main()
{
    greet();

    printNum(1);
    return 0;
}