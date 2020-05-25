#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int a[100];
int ans,count;

int find_nth_term(int n,int b) {
     if(count<=n)
     {
         a[b+3]=a[b]+a[b+1]+a[b+2];
         count++;
         find_nth_term(n,b+1);
     }
     else
     return;
}

int main() {
    int n;
  
    scanf("%d %d %d %d", &n, &a[1], &a[2], &a[3]);
    find_nth_term(n,1);
    printf("%d",a[n]); 
    return 0;
}


