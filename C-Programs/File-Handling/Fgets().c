/*foef() - whether we have read the end of file or not it return true if counter reach EOF else false!
fgetc() is used to read the character by character from file by using 'r' mode of the file handling
fgets(variable_to_store,length,file_pointer);

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
		
		while(!feof(fp))
		{
			
			fgets(data,25,fp);
			printf("\nthe characters read were is :: %s",data);
		}
		fclose(fp);
	}
return 0;
}
