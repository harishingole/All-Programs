#include<stdio.h>
int main()
{
	int n=1;
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			
			printf("%3d",n);
		}
		n++;
		printf("\n");
		
	}
}
/*
  1  1  1  1  1
  2  2  2  2
  3  3  3
  4  4
  5
*/
