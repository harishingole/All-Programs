#include<stdio.h>
int factorial(int num)
{
	if(num<=1)
		return 1;
	else
	
		return num *  factorial(num-1);
}
int main()
{
	int num,fact=1;
	printf("Enter number to check factorial :\n");
	scanf("%d",&num);
	int result = factorial(num);
	printf("Factorial of %d is %d \n",num,result);
return 0;
}
