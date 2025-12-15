#include<stdio.h>

int a[5];

void input()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the no :");
		scanf("%d",&a[i]);
	}
}
void output()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
}
int main()
{
	input();
	output();
}
