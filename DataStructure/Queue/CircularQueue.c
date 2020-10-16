#include<stdio.h>
#define MAX 5
int queue[MAX];
int f=-1;
int r=-1;
void enqueue(int data)
{
	
	if(f==-1 && r==-1)
	{
		f=0;
		r=0;
		queue[r]=data;
	}
	else if((r+1) % MAX == f)
	{
		printf("Q is full! Please Dequeue element..\n");	
	}
	else
	{
		r = (r+1) % MAX;
		queue[r]=data;
	}
}
int dequeue()
{
	int tmp;
	if(f==-1 && r==-1)
	{
		printf("Q is Empty! Please Enqueue Element\n");
	}
	else 
	{
		tmp = queue[f];
		f = (f+1) % MAX;
	}
}	
void display()
{

	int i = f;
	if(f==-1 && r==-1)
	{
		printf("Q is Empty! Please Enqueue Element\n");
	}
	else
	{
		while(i!=r)
		{
			printf("%3d",queue[i]);
			i=(i+1)%MAX;
		}
		printf("%3d",queue[i]);
		printf("\n");
	}
}
int main()
{	
	enqueue(1);enqueue(3);enqueue(2);enqueue(4);enqueue(5);
	dequeue();dequeue();dequeue();dequeue();dequeue();
	enqueue(4);	
	display();
}	
	
