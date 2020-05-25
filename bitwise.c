#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void calculate_the_maximum(int n, int k)
{
    int orMax=0,andMax=0,xorMax=0,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(orMax<(i|j) && (i|j)<k)
                orMax = i | j;
            if(andMax<(i&j) && (i&j)<k)
                andMax = i & j;
            if(xorMax<(i ^ j) && (i^j)<k)
                xorMax = i ^ j;
        }
    }
    printf("%d\n%d\n%d",andMax,orMax,xorMax);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}

