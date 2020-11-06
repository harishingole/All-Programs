#include<stdio.h>
#define MAX 100
int swap(int *x,int *y)
{
	int tmp=*x;
	*x=*y;
	*y=tmp;
}
int partition(int *arr,int left,int right)
{
	int i;
	int pivot=arr[right];
	i=left-1;
	for(int j=left;j<right;j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[right]);
	return (i+1);
}
int quickSort(int *arr,int left,int right)
{
	if(left < right)
	{
		int pivotPosition = partition(arr,left,right);
		quickSort(arr,left,pivotPosition-1);
		quickSort(arr,pivotPosition+1,right);		
	}	
}
void display(int *arr,int size)
{
	
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
	quickSort(arr,0,size-1);
	printf("\nYour sorted Array is ::\n");
	display(arr,size);
	return 0;
}
