#include<stdio.h>
int  findMissingNum(int *arr,int n)
{
	int total = (n+1)*(n+2)/2;
	for(int i=0;i<n;i++)
	{
		total=total-arr[i];
		
	}
	return total;
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
	int arr[]={1,2,3,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Given array size :: %d",size); 
	printf("\nGiven array is \n"); 
	printArray(arr, size); 
	int missingNumber = findMissingNum(arr,size);
	printf("\nLargest number : %d\n",missingNumber);  
}
