#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

void preorderTraversal(struct node* root)
{
	struct node* it = root;
	if(it)
	{	printf("%4d",it->data);
		preorderTraversal(root->left);
		preorderTraversal(root->right);
		
	}
}
void inorderTraversal(struct node* root)
{
	struct node* it = root;
	if(it)
	{	inorderTraversal(root->left);
		printf("%4d",it->data);
		inorderTraversal(root->right);
		
	}
}
void postorderTraversal(struct node* root)
{
	struct node* it = root;
	if(it)
	{	postorderTraversal(root->left);
		postorderTraversal(root->right);
		printf("%4d",it->data);
	}
}



struct node* insertNode(struct node* root, int value)
{
	
	if(root == NULL)
	{
		struct node* ptr = malloc(sizeof(struct node));
		ptr->data = value;
		ptr->left=NULL;
		ptr->right=NULL;
		return ptr;
	}
	else
	{
		if(value < root->data)
		{
			 root->left = insertNode(root->left,value);
		
		}
		else
		{
			root->right = insertNode(root->right,value);
		}
	}	
	return root;
}

int main()
{
	struct node* root = insertNode(NULL,100);
	insertNode(root,50);
	insertNode(root,150);
	insertNode(root,25);
	insertNode(root,75);
	insertNode(root,125);
	insertNode(root,175);
	
	printf("\nPreorder - Traversal of B.T  :: \n");
	preorderTraversal(root);
	printf("\ninorder - Traversal of B.T   :: \n");
	inorderTraversal(root);
	printf("\nPostorder - Traversal of B.T :: \n");
	postorderTraversal(root);
	printf("\n------------B.T------------- :: \n");		
}
