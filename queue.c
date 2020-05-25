#include<stdio.h>

int queue[1000],s,e;

void add(int data){
	if(e==1000){
		printf("Queue full\n");
	}
	else{
		queue[e] = data;
		e++;
	}
}

void removeE(){
	if(s==999 || s==e)
		printf("No element to remove\n");
	else
		s++;
}

void print(){
	int i;
	for(i=s;i<e;i++)
		printf("%d ",queue[i]);
	printf("\n");
}

int main(){
	removeE();
	add(10);
	add(20);
	print();
	add(30);
	add(40);
	print();
	removeE();
	print();
	removeE();
	print();
	add(50);
	add(60);
	print();
	removeE();
	print();
}
