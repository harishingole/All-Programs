#include<stdio.h>
int main()
{
	int n=1;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			
			printf("%3d",n);
		}
		n++;
		printf("\n");
		
	}
}

/*
output

  1
  2  2
  3  3  3
  4  4  4  4
  5  5  5  5  5
*/
