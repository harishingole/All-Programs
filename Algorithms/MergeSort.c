#include<stdio.h>
#include <stdlib.h>
#define MAX 100


int LeftArray[MAX];  		//Half Sorted list of Array
int RightArray[MAX];		//Half Sorted list of Array
int n1,n2;  			//Size of the list of Array

void divideArray(int arr[], int l, int mid, int h)
{
	int i,j;
	n1 = mid - l + 1;
	n2 = h - mid;
	
	LeftArray[n1], RightArray[n2];
	
	for(i=0;i<n1;i++)
		LeftArray[i] = arr[l + i];
	for(j=0;j<n2;j++)
		RightArray[j] = arr[mid + 1 + j];
}

void merge(int arr[], int l, int mid, int h)
{
	divide(arr,l,mid,h);
	int i=0,j=0,k=l;
	while(i < n1 && j < n2)
	{
		if(LeftArray[i] < RightArray[j])
		{
			arr[k++] = LeftArray[i++];
		}	
		else
		{
			arr[k++] = RightArray[j++];
		}
	}
	//Remaining Elements
	for(i;i<n1;i++)
		arr[k++] = LeftArray[i];
	for(j;j<n2;j++)
		arr[k++]=RightArray[j];
}
void mergeSort(int *arr,int l,int h)
{
	if(l<h)
	{
		int mid = l + (h - l) / 2; 
		mergeSort(arr, l, mid);
		mergeSort(arr, mid+1, h);
		merge(arr,l, mid, h);
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
	mergeSort(arr,0,size-1);
	printf("\nYour sorted Array is ::\n");
	display(arr,size);	
	return 0;
}
