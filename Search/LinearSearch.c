#include<stdio.h>
#define SIZE 10

void linearSearch(int arr[],int key)
{
    int f=0;
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]==key)
        {
            f=1;
            break;
        }
    }
    
    if(f==1)
    {
        printf("\n%d found",key);
    }else{
        printf("\n%d not found",key);
    }
}
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    linearSearch(arr,25);
    linearSearch(arr,60);
}