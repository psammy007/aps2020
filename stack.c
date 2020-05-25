#include<stdio.h>

int stack[1000],i;

void push(int data){
	if(i==999)
		printf("Stack full\n");
	else{
		stack[i] = data;
		i++;
	}
}

void pop(){
	i--;
	if(i<0){
		i = 0;
		printf("Stack is empty");
	}
}

void getElement(){
	printf("at %d is %d\n",i-1,stack[i-1]);
}

int main(){
	push(10);
	getElement();
	push(9);
	getElement();
	push(5);
	getElement();
	push(4);
	getElement();
	push(2);
	getElement();
	pop();
	getElement();
	pop();
	getElement();
	push(50);
	getElement();
	push(100);
	getElement();
	
}
