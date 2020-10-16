/*fputs is function which is used write character by character in file with the help of FILE pointer
Signature of fputs() is fputs(character,filepointer)*/

#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char data[25] = "Harish Ingole";
	int len = strlen(data);
	//fputc(character,file_pointer);
	fp = fopen("harish.txt","w");
	if(fp == NULL)
	{
		printf("\n Unable to create file");
	}
	else
	{
		for(int i=0;i<len;i++)
		{	
			printf("Writing the character %c \n ", data[i]);
			fputc(data[i],fp);	
		}
		printf("data has written Successfully\n");
		fclose(fp);
	}
	
}
