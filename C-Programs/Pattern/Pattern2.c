#include<stdio.h>
/*
int main()
{
	int a=511709,sum=0;
	while(a!=0)
	{
		int x=a%10;
		sum+=x;
		a=a/100;
	}
	printf("%d",sum);
		
	}


Output
  A
  B  C
  D  E  F
  G  H  I  J
  K  L  M  N  O
*/

int main()
{
	for(int i=3;i<15;i+=3)
	{
			printf("%3d",i);
			++i;
	}

return 0;		
}

