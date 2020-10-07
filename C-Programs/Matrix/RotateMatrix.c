#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int readInput(int[MAX][MAX]);
int rotateArray(int[MAX][MAX]);
int clockwise(int arr[MAX][MAX]);
int anti_Clockwise(int arr[MAX][MAX]);
int display(int[MAX][MAX]);
int arr[MAX][MAX];
int size;
int main(void)
{
	int ch;
	printf("Enter The Array Size for 2D Matrix.? :: \n");
	scanf("%d",&size);
	do{
	
		printf("\n1.Enter Elements of an Array "
			   "\n2.ClockWise Rotaion"
			   "\n3.Anti-ClockWise Rotaion"
			   "\n4.Display Eleements"
			   "\n5.Exit"
			   "\nEnter your choice.\n");
		scanf("%d",&ch);
		switch(ch){
					case 1: readInput(arr);
							break;
							
					case 2: clockwise(arr);
							break;
					case 3: anti_Clockwise(arr);
							break;
					case 4:	display(arr);
							break;
					default: 
							printf("Thank you 🙏️ \n");
							break;
		}

	}while(ch!=5);
}

int readInput(int arr[size][size])
{
	
	printf("Now Enter an Elements :: \n");
	int i,j;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}

int clockwise(int arr[size][size])
{
	int a1[size][size],i,j,k;
	for(i=0; i<size; i++)
	{
		k=size-1;
		for(j=0; j<size; j++)
		{
			a1[i][j] = arr[k--][i];
		}
	}
	printf("\nClockwise Rotation\n");
	display(a1);
}

int anti_Clockwise(int arr[size][size])
{
	int a1[size][size],i,j,k;
	k=size-1;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			a1[i][j] = arr[j][k];
		}
		k--;
	}
	printf("\nAnti-Clockwise Rotation\n");
	display(a1);
}

int display(int arr[size][size])
{
	int i,j;
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
}
