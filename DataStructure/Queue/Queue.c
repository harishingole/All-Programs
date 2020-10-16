#include<stdio.h>
#define MAX 5
int queue[MAX];
int f=-1;
int r=-1;
void enque(int data)
{
	if(r == MAX-1)
	{
		printf("Q is full! Please Dequeue element\n");	
	}
	else 
	{
		if(f==-1)
		{
			f=0;
			queue[++r]=data;
		}
		else
		{
			queue[++r]=data;
		}
		
	}
}
int dequeue()
{
	int tmp;
	if(f==-1)
	{
		printf("Q is Empty! Please Enqueue Element.");
	}
	else
	{
		return  tmp = queue[f++];
	}
}	
void display()
{

	printf("\nYour queue\n");
	int i = f;
	while(i<=r)
	{
		printf("%3d",queue[i]);
		i++;
	}
	printf("\n");
}
int main()
{
	enque(1);
	enque(2);
	enque(3);
	enque(4);
	enque(5);
	display();
	
}
