#include<stdio.h>
#include<ctype.h>
#define MAX 100

int Stack[MAX];
int Top=-1;

void push(int data)
{
	if(Top==MAX-1)
	{
		printf("'\nStack is overflow \n");
	}
	else
	{
		Stack[++Top]=data;
	}
}

int pop()
{
	if(Top==-1)
	{
		printf("'\nStack is Underflow \n");
	}
	else
	{
		return Stack[Top--];
	}
}
int myPow(int a,int b)
{
	int c = a;
	for(int i=1;i<b;i++)
	{
		c = c*a;//1. 4*4 2. 16*4
	}
return c;
}
int postfixEvaluation(char *arr)
{
	int Operand1,Operand2,value;
	char *copyArrayLoc;
	copyArrayLoc = arr;
	for(;*copyArrayLoc!='\0';copyArrayLoc++)
	{
		//for first digit or value
		if(isdigit(*copyArrayLoc))
		{
			push(*copyArrayLoc - '0');/*ASCII code of digit */
		}
		else
		{
			Operand1 = pop();
			Operand2 = pop();
			switch(*copyArrayLoc)
			{
				
				case '+':
						  value=Operand2 + Operand1;
						  break;
				case '-':
						  value=Operand2 - Operand1;
						  break;
				case '*':
						  value=Operand2 * Operand1;
						  break;
				case '/':
						  value=Operand2 / Operand1;
						  break;
				case '%':
						  value=Operand2 % Operand1;
						  break;
				case '^':
						  value=myPow(Operand2,Operand1);
						  break;	  			
			}
			push(value);
		}
	}
	return pop();
}
int main()
{
	char arr[MAX];
	printf(
		"\n----Follow this guidline----\n"
		"\nAdditon opertaor = +"
		"\nsubtraction opertaor = -"
		"\nMultiplication operator = *"
		"\nDivision operator = /"
		"\nSquare Operator = ^\n");
	
	printf("\nEnter a Postfix Expression and press 'Enter' after expression complete::\n");
	scanf("%s",arr);
	int result = postfixEvaluation(arr);
	printf("\nThe Evaluation of this Postfix Expression %s is :: %d\n",arr,result);
	
}
