#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
}*tail,*head,*temp;

void insert(int data){
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head==NULL){
		head = temp;
		tail = temp;
	}
	else{
		tail->next = temp;
		tail = temp;
	}
}

void print(struct node *head){
	struct node *p = head;
	while(p){
		printf("%d ",p->data);
		p = p->next;
	}
	printf("\n");
}

int main(){
	head = NULL;
	insert(6);
	insert(4);
	print(head);
	insert(10);
	insert(12);
	insert(1);
	print(head);
	insert(50);
	insert(100);
	insert(7);
	print(head);
}

