#include<stdio.h>
int main()
{
	int a=4;
	int n=1;
	int c = a<<n;
	printf("\n%d<<%d :: %d\n",a,n,c);//256 bez it treated as a=a*2^n; his n is input for shift the given number
				   //in this prog n=2; 
	
	c=a>>n;
	printf("\n%d>>%d :: %d\n",a,n,c);				
	
	
	int d,e;
	d=2,e=2;
	printf("\n%d & %d :: %d\n",d,e,d&e);
	
}
