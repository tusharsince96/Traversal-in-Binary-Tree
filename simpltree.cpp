//Tree traversal implementation
#include<stdio.h>
#include<stdlib.h>
void preorder(struct node * root);
void Inorder(struct node *root);
void postorder(struct node *root);
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int data)
{
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

void preorder(struct node * root)
{
	if(root==0)
	{
		return;
	}
	printf("%d",root->data);
	preorder(root->left);
	preorder(root->right);
}

void Inorder(struct node *root)
{
	if(root==0)
	{
		return;
	}
	Inorder(root->left);
	printf("%d",root->data);
	Inorder(root->right);
}

void postorder(struct node *root)
{
	if(root==0)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d",root->data);
}
main()
{
	struct node *root=newNode(1);
	root->left=newNode(2);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	root->right=newNode(3);
	
	printf("pre-order Traversal of a tree: ");
	preorder(root);
	printf("\n Inorder Traversal of a tree: ");
	Inorder(root);
	printf("\n Postorder Traversal of a tree: ");
	postorder(root);
	
}
