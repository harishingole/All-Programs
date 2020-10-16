/*fputs is function which i sused write the string in file with the help of FILE pointer
Signature of fputs() is fputs(string,filepointer)*/

#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char data[100];
	printf("Enter a String\n");
	fgets(data,sizeof(data),stdin);
	fp = fopen("harish.txt","w");
	if(fp == NULL)
	{
		printf("\n Unable to create file");
	}
	else
	{
		
		fputs(data,fp);	
		printf("data has written Successfully\n");
		fclose(fp);
	}
return 0;
}
