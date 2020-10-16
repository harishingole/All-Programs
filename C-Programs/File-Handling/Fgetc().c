/*foef() - whether we have read the end of file or not it return true if counter reach EOF else false!
fgetc() is used to read the character by character from file by using 'r' mode of the file handling
*/
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char data[25];

	fp = fopen("harish.txt","r");
	if(fp == NULL)
	{
		printf("\n Unable to read the file");
	}
	else
	{
		int i=0;
		while(!feof(fp))
		{
			
			data[i] = fgetc(fp);	
			printf("%c",data[i]);
			i++;
		}
		int len = strlen(data);
		printf("\nlenth of the string is :: %d\n",len);
		fclose(fp);
	}
return 0;
}
