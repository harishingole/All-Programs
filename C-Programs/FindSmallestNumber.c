#include<stdio.h>
#define MAX 100
int findMin(int *a,int s)
{
	int miN=a[0];
	for(int i =0;i<s;i++)
	{
		if(a[i]<miN)
		miN=a[i];
	}
	
	return miN;
	
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
	printf("'\nEnter element to find out Smallest element :: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d,",&arr[i]);
	}

	printf("Given array is \n"); 
	printArray(arr, size); 

	//int size = sizeof(arr)/sizeof(arr[0]);
	int smallestNumber = findMin(arr,size);
	printf("\nLargest number : %d\n",smallestNumber);  
}
