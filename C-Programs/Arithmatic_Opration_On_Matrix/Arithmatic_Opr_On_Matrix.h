#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int read_First_Array_Input(int,int,int[MAX][MAX]);
int display(int,int,int [MAX][MAX]);
int m,n,p,q;
int arr[MAX][MAX];
int arr1[MAX][MAX];

int readInput()
{
	printf("Enter The Rows = m for First 2D Matrix.? :: \n");
	scanf("%d",&m);
	printf("Enter The Column = n for First 2D Matrix.? :: \n");
	scanf("%d",&n);
	printf("Enter The Rows = p for First 2D Matrix.? :: \n");
	scanf("%d",&p);
	printf("Enter The Column = q for  First 2D Matrix.? :: \n");
	scanf("%d",&q);
	printf("Enter Elements For First an Array\n");
	read_First_Array_Input(m,n,arr);
	printf("Enter Elements For Second an Array\n");
	read_First_Array_Input(p,q,arr1);
}
int read_First_Array_Input(int a,int b,int arr[a][b])
{
	int i,j;
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}
int multiplication(int arr[m][n],int arr1[p][q])
{
	if(n==p)
	{
		int i,j,k;
		int result_OF_Multiply[m][q];
		for(i=0; i<m; i++)
		{
			for(j=0; j<q; j++)
			{
				result_OF_Multiply[i][j]=0;
				for(k=0; k<n; k++)
				{
					result_OF_Multiply[i][j] += arr[i][k] * arr1[k][j];
				}
			}
		}
		printf("\n------Multiplication Of Matrix------\n");
		display(m,q,result_OF_Multiply);
	}
	else
	{
				printf("----Multiplication is not possible! Because n & p is not same!---\n"
				"\n---Please Enter Array again with rows and col---\n"
				"---For Multiplication p & n should be same---\n\n");
				readInput();
	}
}	

int addition(int arr[m][n],int arr1[m][n])
{
	if(m==n)
	{
		
		int i,j,k;
		
		int result_OF_Addition[m][n];
		for(i=0; i<m; i++)
		{
			for(j=0; j<q; j++)
			{
				result_OF_Addition[i][j] = arr[i][j] + arr1[i][j];
				
			}
		}
		printf("\n------Addition Of Matrix------\n");
		display(m,q,result_OF_Addition);
	}
	else{
		printf(	"\n---Addition is not possible bez. Your Matrix is not square.---" 
				"\n---Addition is possible only with the square Matrix---"
				"\n---Please Enter Array again with rows and col---\n\n");
				readInput();
	}
}

int subtraction(int arr[m][n],int arr1[m][n])
{
	if(m==n)
	{
		int i,j,k;
		int result_OF_Subtraction[m][n];
		for(i=0; i<m; i++)
		{
			for(j=0; j<q; j++)
			{
				result_OF_Subtraction[i][j] = arr[i][j] - arr1[i][j];
			}
		}
		printf("\n------Subtraction Of Matrix------\n");
		display(m,q,result_OF_Subtraction);
	}
	else
	{
			printf(	"\n---Subtraction is not possible bez. Your Matrix is not square.---" 
					"\n---Subtraction is possible only with the square Matrix---"
					"\n---Please Enter Array again with rows and col\n\n");
				readInput();
	}
}


int display(int a,int b,int arr[a][b])
{
	int i,j;
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
}
