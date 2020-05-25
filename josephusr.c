#include<stdio.h>  
  
int josephus(int n, int k) 
{ 
    if (n == 1)
        return 1;
    else
    	return (josephus(n - 1, k) + k-1) % n + 1;
} 


int main() 
{ 
    int n,k;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter k\n");
    scanf("%d",&k); 
   	printf("The chosen place is %d",josephus(n, k)); 
    return 0; 
} 
