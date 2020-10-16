/*
	fscanf(file+pointer,format string,list of variables);
	
*/
#include<stdio.h>
#include<string.h>
int main()
{
	
	FILE *fp;
	char data[25];
	char eof[25];
	int a;
	fp = fopen("harish.txt","r");
	if(fp == NULL)
	{
		printf("\n Unable to create file");
	}
	else
	{
		fscanf(fp,"%s %s",data,eof);
		printf("%s %s",data,eof);
		printf("\ndata has read Successfully\n");
		fclose(fp);
	}
return 0;
}
