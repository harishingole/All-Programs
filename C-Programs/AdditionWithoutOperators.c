#include<stdio.h>
int add(int a,int b)
{
	;
	while(b!=0)
	{
		c = a & b; //2&2= 0010 & 0010 = 0010 i.e 2
		a = a ^ b; //2^2 = 4
		b = c << 1;//2<<1 which means 2*2^1 = 4
	}
	return a;
}
int main()
{
	int a,b;
	printf("'\nEnter first number for addtion :: ");
	scanf("%d",&a);
	printf("'\nEnter second number for addtion :: ");
	scanf("%d",&b);
	int c = add(a,b);
	printf("\nAddtion is :: %d\n",c);
}
