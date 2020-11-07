#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node* createNode(int value)
{
	struct node* tmp = malloc(sizeof(struct node));
	tmp->data=value;
	tmp->left=NULL;
	tmp->right=NULL;
return tmp;
}

struct node* insertLeft(struct node* root,int value)
{
	root->left = createNode(value);
	return root->left;
}
struct node* insertRight(struct node* root,int value)
{
	root->right=createNode(value);
	return root->right;
}

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
/*struct node* createRoot()
{
	int value;
	struct node* root;
	printf("\n Enter root value first ::\n");
	scanf("%d",&value);
	return root = createNode(value);
	
}*/
int main()
{
	struct node* root = createNode(5);
	insertLeft(root,10);
	insertRight(root,20);
	insertLeft(root->left,30);
	insertRight(root->left,40);
	insertLeft(root->right,50);
	insertRight(root->right,60);
	printf("\nPreorder - Traversal of B.T  :: \n");
	preorderTraversal(root);
	printf("\ninorder - Traversal of B.T   :: \n");
	inorderTraversal(root);
	printf("\nPostorder - Traversal of B.T :: \n");
	postorderTraversal(root);
	printf("\n------------B.T------------- :: \n");		
}
