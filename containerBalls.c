#include<stdio.h>
#include<stdlib.h> 

void merge(long long int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 

    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 

    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(long long int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2;  
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
        merge(arr, l, m, r); 
    } 
} 

int compare(long long int rowSum[],long long int columnSum[],int n){
    int i;
    for(i=0;i<n;i++)
    {
        if(rowSum[i]!=columnSum[i])
            return 0;
    }
    return 1;
}

int main()
{
    int q,n,i,j;
    long long int m[100][100];
    long long int rowSum[100],columnSum[100];
    scanf("%d",&q);
    while(q)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%lld",&m[i][j]);
        int tempR,tempC;
        for(i=0;i<n;i++){
            tempR = 0,tempC = 0;
            for(j=0;j<n;j++){
                tempR += m[i][j];
                tempC += m[j][i];
            }
            rowSum[i] = tempR;
            columnSum[i] = tempC;
        }
        mergeSort(rowSum, 0, n - 1);
        mergeSort(columnSum, 0, n - 1);
        if(compare(rowSum,columnSum,n))
            printf("Possible\n");
        else
            printf("Impossible\n");
        q--;
    }
}

