#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#include"Multiplication.h"

int main(void)
{

	int ch,ch1;
	do{
		printf(
			"\n1.Enter input to store in Array"
		   	"\n2.Multiplication Of Two Arrays"
		   	"\n3.Addition of Two Arrays"
		   	"\n4.Subtraction of Two Arrays"
		   	"\n5.Display Arrays"
		   	"\n6.Exit\n"
		   	"------Enter Your Choice------\n");
		scanf("%d",&ch);
		switch(ch){
		
			case 1:
				readInput();
				break;
			case 2: 
				multiplication(arr,arr1);
				break;
			case 3: 
				addition(arr,arr1);
				break;
			case 4: 
				subtraction(arr,arr1);
				break;
			case 5: 
				do{
				printf("\n------You are in Inner Switch------"
					"\n     1.Display First Array "
					"\n     2.Display Second Array"
					"\n     3.Exit from Inner Switch Case\n"
					"------Enter Your Choice------\n");
				scanf("%d",&ch1);
				switch(ch1){
					
					case 1 : 
						display(m,n,arr);
						break;
					case 2 : 
						display(p,q,arr1);
						break;
					default:
						printf("--You are in Outer Switch case-- \n");
						break;
					}
				}while(ch1!=3);
				break;
			default: printf("Thank you 🙏️ \n");
				break;
		}

	}while(ch!=6);
}


