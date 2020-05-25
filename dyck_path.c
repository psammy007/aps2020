#include<stdio.h>
#include<string.h>
#include<limits.h>
int t[100000],q,n,x=1,y=0,i;

void print(int d,int u,int e,int r){
	if(u<n-1){
		t[d] = 1;
		if(e+1>=r)
			print(d+1,u+1,e+1,r);
		t[d] = 0;
		if(e>=r+1)
		print(d+1,u+1,e,r+1);
	}
	else if(e == r ){
		for(i=0;i<d;i++)
			printf("%d",t[i]);
		printf("\n");
	}
}

int main(){
	int o,u=0;
	t[0] = 1;
	printf("Enter no\n");
	scanf("%d",&o);
	n = 2 * o ;
	print(1,u,x,y);
}
