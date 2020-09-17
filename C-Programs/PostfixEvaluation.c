#include<stdio.h>
#include<ctype.h>
#define MAX 100

int Stack[MAX];
int Top=-1;

void push(int data)
{
	if(Top==Max-1)
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
	if(Top==-1])
	{
		printf("'\nStack is Underflow \n");
	}
	else
	{
		return Stack[Top--];
	}
}

int postfixEvaluation(char *arr)
{
	int Operand,Operand1,value;
	char *copyArray;
	copyArray = arr;
	for(;*copyArray!='\0';copyArray++)
	{
		if(isdigit(*copyArray))
		{
			push(*copyArray - '0');/*ASCII code of digit */
		}
		else
		{
			Operand = pop();
			Operand1 = pop();
			switch(*copyArray)
			{
				
				case '+':
						  value=Operand1+Operand;
						  break;
				case '-':
						  value=Operand1-Operand;
						  break;
				case '*':
						  value=Operand1*Operand;
						  break;
				case '/':
						  value=Operand1/Operand;
						  break;
				case '%':
						  value=Operand1%Operand;
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
	printf("\nEnter a Postfix Expression :: ");
	scanf("%s",arr);
	int result = postfixEvaluation(arr);
	printf("\nThe Evaluation of this Postfix Expression %s is :: %d\n",arr,result);
	
}
