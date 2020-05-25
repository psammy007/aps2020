#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *right,*left;
}*root,*temp;

struct node * insert(struct node *root,int data){
	if(root==NULL){
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = data;
		temp->right = temp->left = NULL;
		return temp;
	}
	else{
		if(root->data>data)
			root->left = insert(root->left,data);
		else if(root->data<data)
			root->right = insert(root->right,data);
	}
	return root;
}

void print(struct node *root){
	if(root!=NULL){
		print(root->left);
		printf("%d ",root->data);
		print(root->right);
	}
}

int main(){
	root = NULL;
	root = insert(root,50);
	root = insert(root,75);
	root = insert(root,40);
	print(root);
	printf("\n");
	root = insert(root,78);
	print(root);
	printf("\n");
	root = insert(root,76);
	root = insert(root,90);
	print(root);
	printf("\n");
}


