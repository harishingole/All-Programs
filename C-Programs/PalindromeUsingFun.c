#include<stdio.h>
#include<string.h>
int main()
{
	char string[100],rev_string[100];
	printf("Enter String :: \n");
	gets(string);
	strcpy(rev_string,string);
	strrev(rev_string);	
	if(strcmp(string,rev_string)==0)
	{
		printf("String is Palindrome");
	}
	else
	{
		printf("String is not Palindrome");
	}
	
return 0;
}
