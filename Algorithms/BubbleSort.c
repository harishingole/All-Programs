#include<stdio.h>
#define MAX 100
int swap(int *x,int *y)
{
	int tmp=*x;
	*x=*y;
	*y=tmp;
}
int bubbleSort(int *arr,int size)
{	
	int i,j,swapped;
	for(i=0;i<size-1;i++)
	{
		swapped=0;
		for(j=0;j<size-i-1;j++)
		{
			if(arr[i]>=arr[j+1])
				swap(&arr[j],&arr[j+1]);
				swapped=1;
		}
		if(swapped==0)
		{
			break;
		}
	}
}
void display(int *arr,int size)
{
	printf("\nYour sorted Array is ::\n");
	for(int i=0;i<size;i++)
	{
		printf(" %3d",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[MAX],size;
	printf("'\nEnter size :: ");
	scanf("%d",&size);
	printf("'\nEnter element to sort :: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d,",&arr[i]);
	}
	printf("\nGiven Array is ::\n");
	display(arr,size);
	bubbleSort(arr,size);
	display(arr,size);
return 0;
}
