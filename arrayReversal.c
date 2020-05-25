#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    /* Write the logic to reverse the array. */
    int r=num-1;i=0;
    int temp;
    while(i<r)
    {
        temp=arr[i];
        arr[i]=arr[r];
        arr[r]=temp;
        i++;r--;
        
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}


