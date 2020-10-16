#include<stdio.h>
int main()
{
	
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			
			printf("%3d",j);
		}
		
		printf("\n");
		
	}
}

/* Output
  1
  1  2
  1  2  3
  1  2  3  4
  1  2  3  4  5
*/
