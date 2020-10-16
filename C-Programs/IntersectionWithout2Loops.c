/*Find Common elements from two array without using 2 loops*/
#include<stdio.h>
int main()
{
	
	int a1[] = {4,5,6,2};
	int a2[] = {3,4};
	int len1 = sizeof(a1)/sizeof(a1[0]);
	int len2 = sizeof(a2)/sizeof(a2[0]);
	int i=0,j=0;
	while(i < len1 && j < len2)
	{
		if(a1[i]<a2[j])
		{
			i++;
		}
		else if(a2[j]<a1[i])
		{
			j++;
		}else{
			printf("interSection :: %d\n",a1[i]);
			i++;
			j++;
		}
	}
return 0;
}
