#include<stdio.h>

int main(){
	int n,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum *= i;
	printf("factorial:%d",sum);
}
