#include <bits/stdc++.h>
#define N 2
using namespace std;

// Function to reverse rows of the matrix

void reverse_rows(int arr[N][N])
{
	int k;
	for (int i = 0; i < N; i++)
	{
		k = N-1;	
		for (int j = 0; j < k; j++)
		{
			swap(arr[i][j], arr[i][k]);
			k--;
		}
	}
}
// Transpose of a matrix
void transpose(int arr[N][N])
{
	for (int i = 0; i < N; i++)
	for (int j = i; j < N; j++)
	swap(arr[i][j], arr[j][i]);
}

// print the matrix
void print_matrix(int mat[N][N])
	{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		printf("%d\t", mat[i][j]);
	
		printf("\n");
	}
	printf("\n");
}

// Main function
int main()
{
	int mat[N][N] = {1, 2, 3, 4};
	cout<<"The matrix before rotation\n";
	print_matrix(mat);
	transpose(mat);
	cout<<"The matrix after rotation - \n";
	reverse_rows(mat);
	print_matrix(mat);
return 0;
}
