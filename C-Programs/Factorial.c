#include<stdio.h>
int main()
{
	int num,fact=1;
	printf("Enter number to check factorial :\n");
	scanf("%d",&num);
	if(num>=1)
	{
		for(int i=1;i<=num;i++)
		{
			fact=fact*i;	
		}
		printf("Factorial of %d is %d \n",num,fact);
	}
	else
	{
		printf("Factorial is not possible\n");
	}
return 0;
}
