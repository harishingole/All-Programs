
#include <stdio.h>
#include <stdlib.h>

struct Node{
	
	int data;
	struct Node* next;
	struct Node* prev;
};

typedef struct Node node;
node *head = NULL;

void insertAtfront(int data)
{
	node *tmp=(node*) malloc (sizeof(node));
	tmp->data=data;
	if(head == NULL)
	{
		head = tmp;
	}
	else
	{
		tmp->next = head;
		head->prev=tmp;
		head = tmp;
	}
}

void insertAtEnd(int data)
{
	node *tmp=(node*) malloc (sizeof(node));
	node *it;
	tmp->data=data;
	if(head == NULL)
	{
		head = it = tmp;
	}
	else{
		tmp->prev = it;
		it->next = tmp;
		it=it->next;
	}	
}

void display()
{
	node *it=head;
	do{
		printf("%d->",it->data);
		it=it->next;
		
	}while(it);
	printf("\n");
}
int main()
{
	/*insertAtfront(100);insertAtfront(90);insertAtfront(80);insertAtfront(70);insertAtfront(60);
	display();
	*/
	insertAtEnd(10);insertAtEnd(20);insertAtEnd(30);insertAtEnd(40);insertAtEnd(50);
	display();
	
	/*printf("Value of head of First LinkedList which is The address of first node:: ");
	printf("%p\n",head);
	printf("adr of Last node of Next of First List :: ");
	printf("%p\n",last->next);
	printf("Adr of Last Node of Next is %p = Value of Head is %p of First LinkedList :: ",head,last->next);
	printf("\nnFirst-Node of First List :: ");
	printf("%d\n",head->data);
	printf("Last-Node of First List  :: ");
	printf("%d\n",last->data);
	
	delAtFront();
	printf("\n\nAfter Del_From_Front ::\n");
	display();
	printf("Value of head of First LinkedList which is The address of first node:: ");
	printf("%p\n",head);
	printf("adr of Last node of Next of First List :: ");
	printf("%p\n",last->next);
	printf("Adr of Last Node of Next is %p = Value of Head is %p of First LinkedList :: ",head,last->next);
	printf("\n\nFirst-Node of First List :: ");
	printf("%d\n",head->data);
	printf("Last-Node of First List  :: ");
	printf("%d\n",last->data);
	
	delFromLast();
	
	printf("\n\nAfter Del_From_Last ::\n");
	display();
	printf("Value of head of First LinkedList which is The address of first node:: ");
	printf("%p\n",head);
	printf("adr of Last node of Next of First List :: ");
	printf("%p\n",last->next);
	printf("Adr of Last Node of Next is %p = Value of Head is %p of First LinkedList :: ",head,last->next);
	printf("\n\nFirst-Node of First List :: ");
	printf("%d\n",head->data);
	printf("Last-Node of First List  :: ");
	printf("%d\n",last->data);
	
	insertAtFront(10);insertAtFront(20);insertAtFront(30);insertAtFront(40);insertAtFront(50);
	display();
	
	printf("First-Node of Second List :: ");
	printf("%d\n",head->data);	
	printf("Last-Node of Second  List :: ");
	printf("%d\n",last->data);
	*/
	
}
