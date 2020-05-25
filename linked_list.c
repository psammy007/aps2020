#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head=NULL,*temp,*tail,*p ;

void addData(int n)
{
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = n;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{	
		tail->next = temp;
		tail = temp;
	}
}

void print()
{
	p = head;
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p = p->next;
	}
}

int value;

int print_reverse(struct node *head,int u)
{
	int n=0,a[1000];
	p = head;
	while(p!=NULL)
	{
		a[n] = p->data;
		n++;
		p = p->next;
	}
	return a[n-1-u];
}

int main()
{
	addData(4);
	addData(3);
	addData(2);
	addData(1);
	//addData(40);
	//addData(50);
	//print();
	//printf("\n\n\n\n");
	int r = print_reverse(head,2);
	printf("\n\n\nr = %d\n",r);
	
}
