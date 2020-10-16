#include<stdio.h>
#define MAX 100
int findMax(int *a,int s)
{
	int maX=0;
	for(int i =0;i<s;i++)
	{
		if(a[i]>maX)
		maX=a[i];
	}
	
	return maX;
	
}
void printArray(int A[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
}
int main()
{
	int arr[MAX],size;
	printf("'\nEnter size :: ");
	scanf("%d",&size);
	printf("'\nEnter element to findoutLargestNumber :: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d,",&arr[i]);
	}

	printf("Given array is \n"); 
	printArray(arr, size); 

	//int size = sizeof(arr)/sizeof(arr[0]);
	int largestNumber = findMax(arr,size);
	printf("\nLargest number : %d\n",largestNumber);  
}
