#include<stdio.h>
#include<stdlib.h>

#define NO_OF_CHAR 256
int* getCharCount(char *str)
{
	int count[NO_OF_CHAR]; = (int*)calloc(sizeof(int),NO_OF_CHAR);
	for(int i=0;str[i]!='\0';i++)
		count[*(str+i)]++;
	return count;	
}
int firstNonRepeatingChar(char *str)
{
	int *count = getCharCount(str);
	int index = -1;
	for(int i=0;str[i]!='\0';i++)
	{
		if(count[str[i]] == 1)
		{
			index = i;
			break;
		}
	}
	free(count);
	return index;
}
int main()
{
	char str[] ="amazon";
	int result = firstNonRepeatingChar(str);
	if(result==-1)
	{
		printf("All character are repeating or string is empty\n");
	}
	else
	{
		printf("%c is non repeating character\n",str[result]);
	}
}
