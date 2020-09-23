#include<stdio.h>
int processArray(int a[],int len)
{
	
	int sum=0,count=0,i,j=-1;
	int arr[10];
	for(int i=0;i<len;i++)
	{
		if(a[i] % 2 == 0 )
		{
			count++;
			//if the LastNumber is even
			if(i == len-1 && a[i] % 2==0)
				arr[++j]=count;
				
		}
		else if(a[i] % 2!=0 && count>=1)
		{
			
			arr[++j]=count;
			count=0;
		}
	}
	printf("Number of consecutive sequence :: \n");
	for(int i=0;i<=j;i++)
	{
		printf("%3d",arr[i]);
		sum = sum + arr[i];
		count++;
	}
	return sum/count;
}
int main()
{
	int arr1[] = {6,6,3,1,2,8,1,4,8,66,44,22,36,48,68,24,5,94,68,52,478,95,36,4};
	int size = sizeof(arr1)/sizeof(arr1[0]);
	printf("Given Array\n{");
	for(int i=0;i<size;i++)
	printf("%3d",arr1[i]);
	printf("}\n");
	float result = processArray(arr1,size);	
	printf("\navg of sequences :: %f\n",result);
return 0;
}
