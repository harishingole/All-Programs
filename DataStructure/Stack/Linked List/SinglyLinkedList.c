#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

typedef struct Node node;
node *head = NULL;

void insertAtbegining(int data)
{
	node *tmp=(node*) malloc (sizeof(node));
	tmp->data=data;
	tmp->next=head;
	head=tmp;
		
}
void append(int data)
{
	node *tmp=(node*) malloc (sizeof(node));
	tmp->data=data;
	tmp->next=NULL;
	
	if(head==NULL)
	{		
		head=tmp;
	}
	
	node *it=head;
	while(it->next)
	{
		it=it->next;
	}
	it->next=tmp;
	
}
void display()
{	//empty???
	if(head == NULL)
	{
		printf("LL is empty...\n");
		return;
	}

	//go to last node...
	node *it=head;
	while(it!= NULL)
	{
		printf("%d-->", it->data);
		it=it->next;
	}
	printf("\n");
}
void reverse(node *prev,node*cur)
{
	if(cur)
	{
		reverse(cur,cur->next);
		cur->next=prev;
	}
	else
	head=prev;
}
void deleteFromBegin()
{
	if(head!=NULL)
	{
		node *tmp=head;
		head = tmp->next;
		free(tmp);
	}
}
void deleteFromLast()
{
	node *it=head;
	if(head!=NULL)
	{
		if(head->next==NULL)
		{
			head=NULL;
			free(it);
		}
		else
		{
	
			while(it->next->next)
			{
				it=it->next;
			}
			node *tmp=it->next;
			it->next=NULL;
			free(tmp);
		}
	}
}

int isLoop()
{
	node *p,*q;
	p=q=head;
	do{
		p = p->next->next;
		q = q->next;
		if(q->next!=NULL)
		{
			q=q->next;
			
		}
	
	}while(p && q);
	if(p==q)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	
}
int main()
{
	
	for(int i=1;i<=5;i++)
		append(i);
	display();
	insertAtbegining(10);
	insertAtbegining(20);
	insertAtbegining(30);
	insertAtbegining(40);
	insertAtbegining(50);
	
	
	
	display();
	/*int result = isLoop();
	if(result == 1)
	{
		printf("\nLoop is detected in linkedList");
	}
	else
	{
		printf("\nLoop is not detected in linkedList");
	}
	
	/*reverse(NULL,head);
	display();
	deleteFromBegin();
	deleteFromBegin();
	deleteFromBegin();
	deleteFromBegin();
	deleteFromBegin();
	display();
	deleteFromLast();
	deleteFromLast();
	display();*/
return 0;
}
