// #include <stdio.h>

// void Merge(int A[],int p,int q,int r){
//     int n1=p-q+1;
//     int n2=r-q;
//     int L[n1];
//     int R[n2];
// for(int i=0;i<n1;i++)
// L[i]=A[p+i];

// for(int j=0;j<n2;j++)
// R[j]=A[q+1+j];

// int i=0;
// int j=0;


// // for(int k=p;k<r;k++){
// //     if(L[i]<=R[j])
// //     A[k]=L[j++];
// //     else
// //     A[k]=R[i++];
// // }

//  int k = q; // Initial index of merged subarray
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             A[k] = L[i];
//             i++;
//         }
//         else {
//             A[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//  while (i < n1) {
//         A[k] = L[i];
//         i++;
//         k++;
//     }

//         while (j < n2) {
//         A[k] = R[j];
//         j++;
//         k++;
//     }
// }

//  void MergeSort(int A[],int p,int r){
   
//     if(p<r){
//    int q=(p+r)/2;
//     MergeSort(A,p,q);
//     MergeSort(A,q+1,r);
//     Merge(A,p,q,r);
//     }
// }

// void Print(int A[],int n){
//     for(int i=0;i<n;i++)
//     printf("%d ",A[i]);
// }
// int main()
// {
//     int A[]={6,5,1,2,8,4,3,7};
//     MergeSort(A,0,7);
//     Print(A,8);
//  return 0;
// }




/* C program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    // k = l; // Initial index of merged subarray

for(int k=l;k<r;k++){
      if(L[i]<=R[j])
    arr[k]=L[j++];
    else
    arr[k]=R[i++];
}



    // while (i < n1 && j < n2) {
    //     if (L[i] <= R[j]) {
    //         arr[k] = L[i];
    //         i++;
    //     }
    //     else {
    //         arr[k] = R[j];
    //         j++;
    //     }
    //     k++;
    // }
 
    // /* Copy the remaining elements of L[], if there
    // are any */
    // while (i < n1) {
    //     arr[k] = L[i];
    //     i++;
    //     k++;
    // }
 
    // /* Copy the remaining elements of R[], if there
    // are any */
    // while (j < n2) {
    //     arr[k] = R[j];
    //     j++;
    //     k++;
    // }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
 
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
/* Driver code */
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    printf("Given array is \n");
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}