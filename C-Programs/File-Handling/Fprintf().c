/*
	fprintf(file_pointer,"format specifer",list of variables);
	used to write anything in file 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char data[25];
	int a;
	printf("Enter your Name and Age ::\n");
	scanf("%s%d",data,&a);
	fp = fopen("harish.txt","w");
	if(fp == NULL)
	{
		printf("\n Unable to create file");
	}
	else
	{
		fprintf(fp,"%s\t%d",data,a);
		printf("data has written Successfully\n");
		fclose(fp);
	}
return 0;
}
