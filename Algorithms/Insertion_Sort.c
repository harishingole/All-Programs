#include<stdio.h>
#define MAX 100

int sort(int *arr,int size)
{
	int i,j;
	int key;
	for(j=1;j<size;j++)
	{
		key=arr[j];
		i=j-1;
		while(i>=0 && arr[i]>key)
		{
			arr[i+1]=arr[i];
			arr[i]=key;
			i--;
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
	sort(arr,size);
	display(arr,size);
	return 0;
}
