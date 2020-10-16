#include<stdio.h>
#define MAX 100
int main()
{
	int number,flag;

	for(int number=1;number<=10;number++)
	{
		flag=0;
		for(int i=2;i<=number/2;i++)
		{
			if(number % i == 0)
			{
				flag++;
				break;
			}
		}
		if(flag==0 && number!=1)
		{
			printf("%d ",number);
		}
	}
	printf("\n");
	
}
