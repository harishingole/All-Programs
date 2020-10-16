#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	gets(string);
	char rev_String[100];
	int len;
	for (int i = 0; string[i] != '\0'; i++)
    	{
    	    len++;
    	}
	printf("Len :: %d\n",len);
	for(int i=len-1;i>=0;i--)
	{
		rev_String[len-i-1]=string[i];
	}
	puts(rev_String);
	int flag=1;
	for(int i=0;i<len;i++)
	{
		if(string[i]!=rev_String[i])
			flag=0;
	}
	if(flag==1)
	{
		printf("String is Palindrome");
	}
	else
	{
		printf("String is not Palindrome");
	}
return 0;
}
