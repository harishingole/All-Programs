#include<stdio.h>
int main()
{

	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3*i;j++)
		{
			
			printf("*");
			
		}
		printf("\n");
		
	}
}

/*
Output
  1
  2  3
  4  5  6
  7  8  9 10
 11 12 13 14 15

*/
