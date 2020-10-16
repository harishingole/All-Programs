#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	*p=0;
	printf("%d\n",a);
	printf("%d\n",*p);	
}
