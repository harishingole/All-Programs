#include<stdio.h>
#define MAX 100
int main()
{
	int tmp,number,flag,_1Prime,_2Prime;
	printf("\nEnter Number :: ");
	scanf("%d",&number);
	tmp=number;
	for(tmp=number;tmp>=1;tmp--)
	{
		flag=0;
		for(int i=2;i<tmp/2;i++)
		{
			if(tmp % i == 0)
			{
				flag=1;
				break;
			}
		
		}
		if(flag==0 && number!=1)
		{
			printf("we got first nearest prime number %d\n",tmp);
			break;
		}
	}
	_1Prime = tmp;
	for(tmp=number+1;tmp>number;tmp++)
	{
		flag=0;
		for(int i=2;i<tmp/2;i++)
		{
			if(tmp % i == 0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0 && number!=1)
		{
			_2Prime = printf("we got second nearest prime number %d\n",tmp);
			break;
		}
	}
	_2Prime = tmp;
	int a = number - _1Prime;
	int b = _2Prime - number;
	if(a<b || a==b)
	{
		printf("The nearest prime number from %d is :: %d",number,_1Prime);
	}
	else
	{
		printf("The nearest prime number from %d is :: %d",number,_2Prime);
	}
}
