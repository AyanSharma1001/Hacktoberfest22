#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int l){

    int pivot=a[s];
    int i=s+1;
    int j=l;

    while(i<j){
        while(a[j]>pivot && i<j){
            j--;
        }
        
        while(a[i]<pivot && i<j){
            i++;
        }
  
        if(i<j){
            swap(a[i],a[j]);
        }
    }

    swap(a[s],a[j]);
    return j;
}

void quicksort(int a[],int s,int l){
    if(s<l){
        int pi=partition(a,s,l);

        quicksort(a,s,pi-1);
        quicksort(a,pi+1,l);
    }

    return;
}
int main (){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    quicksort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
