
#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

typedef struct Node node;
node *head = NULL, *last = NULL;

void insertAtFront(int data)
{
	node *tmp=(node*) malloc (sizeof(node));
	tmp->data=data;
	if(head == NULL)
	{
		head = last = tmp;
	}
	else
	{
		tmp->next = head;
		head = tmp;
		last->next = head;
	}
}

void insertAtEnd(int data)
{
	node *tmp=(node*) malloc (sizeof(node));
	tmp->data=data;
	if(head == NULL)
	{
		head = last = tmp;
		tmp->next = head;
	}
	else
	{
		last->next = tmp;
		last = tmp;
		tmp->next = head;
	}
}
void delAtFront()
{
	if(head)
	{
		node *tmp = head;
		head = tmp->next;
		last->next = head;
		free(tmp);
	}
	else
	{
		printf("\nLinkedList is Empty ");
	}
	
}
void detectLoop()
{
	node *p = head;
	node *q = head;
	while(p!=NULL && q!=NULL &&q->next!=NULL)
	{
		p=p->next;
		q=q->next->next;
		if(p==q)
		{
			printf("\nLoop is Detected\n");
			exit(0);
		}
		
	}
}
void delFromLast()
{
	node *it = head;
	if(head == NULL)
	{
		printf("\nLinkedList is Empty ");
	}
	else
	{
		while(it->next->next!=head)
		{
			it=it->next;
		}
		node *tmp = it->next;
		it->next = head;
		last = it;
		free(tmp);
	}
}
void display()
{
	node *it=head;
	do{
		printf("%d->",it->data);
		it=it->next;
		
	}while(it!= head);
	printf("\n");
}
int main()
{
	insertAtEnd(10);insertAtEnd(20);insertAtEnd(30);insertAtEnd(40);insertAtEnd(50);
	display();

	printf("Value of head of First LinkedList which is The address of first node:: ");
	printf("%p\n",head);
	printf("adr of Last node of Next of First List :: ");
	printf("%p\n",last->next);
	printf("Adr of Last Node of Next is %p = Value of Head is %p of First LinkedList :: ",head,last->next);
	printf("\nnFirst-Node of First List :: ");
	printf("%d\n",head->data);
	printf("Last-Node of First List  :: ");
	printf("%d\n",last->data);
	
	detectLoop();
	/*
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
	
	/*insertAtFront(10);insertAtFront(20);insertAtFront(30);insertAtFront(40);insertAtFront(50);
	display();
	
	printf("First-Node of Second List :: ");
	printf("%d\n",head->data);	
	printf("Last-Node of Second  List :: ");
	printf("%d\n",last->data);
	*/
}
