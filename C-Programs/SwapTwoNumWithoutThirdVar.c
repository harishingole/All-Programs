#include<stdio.h>
int main()
{
	int a,b;

	printf("\nEnter num ::");
	scanf("%d",&a);
	printf("\nEnter num ::");
	scanf("%d",&b);
	printf("\nBefore Swapping a :: %d and b :: %d   ",a,b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nAfter Swapping a :: %d and b :: %d   ",a,b);
return 0;
}
