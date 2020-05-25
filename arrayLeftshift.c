#include<stdio.h>

void reverseArray(int arr[],int s,int e){
    int temp;
    while(s<e){
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

void shiftArray(int arr[],int n,int s){
    reverseArray(arr,0,s-1);
    reverseArray(arr,s,n-1);
    reverseArray(arr,0,n-1);
}

void print(int arr[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}

int main(){
    int i,n,s,arr[100000];
    scanf("%d%d",&n,&s);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    shiftArray(arr,n,s);
    print(arr,n);
}
