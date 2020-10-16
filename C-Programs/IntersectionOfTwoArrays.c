#include<stdio.h>
int intersection(int *a1,int *a2,int len1,int len2)
{
	
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			if(a1[i] == a2[j])
			{
				printf("Intersection :: %d\n", a1[i]);
					
			}
		}
	}
}
int main()
{
		
	int a1[] = {4,5,6,2};
	int a2[] = {3,4,6};
	int len1 = sizeof(a1)/sizeof(a1[0]);
	int len2 = sizeof(a2)/sizeof(a2[0]);
	intersection(a1,a2,len1,len2);
	
}
