#include<stdio.h>
#define MAX 100
int find_SecondMax(int *a,int s)
{
	int secondLargest,largest;
	if(a[0]>a[1])
	{
		largest=a[0]; // = 2
		secondLargest = a[1]; // = 1
	}
	else
	{
		largest = a[1];
		secondLargest = a[0];
	}
	
	for(int i =2; i<s; i++)
	{
		if(largest < a[i])
		{
			secondLargest = largest;
			largest = a[i];
		}
		else if(secondLargest > a[i])
		{
			secondLargest=a[i];
		}
	}
	for(int i=0;i<s;i++)
	{
		if(a[i] == a[i+1])
			return -1;
	}
	return secondLargest;
	
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
	int second_LargestNumber = find_SecondMax(arr,size);
	printf("\nSecond Largest number : %d\n",second_LargestNumber);  
}
