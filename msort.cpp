#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void disp(int *arr,int size){
    for(int i=0;i<size;i++)
        cout<<*(arr+i)<<"\t";
    cout<<endl;
}

void merge(int arr[],int l,int m,int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1],R[n2];

    for(int i=0;i<n1;i++)
        L[i] = arr[l + i];
    for(int j=0;j<n2;j++)
        R[j] = arr[m + 1 + j];
    int k=l,i=0,j=0;

    while(i < n1 && j <n2){
        if(L[i]<=R[j]){
            arr[k++] = L[i++];
        }
        else{
            arr[k++] = R[j++];
        }
    }
    while(i<n1)
        arr[k++] = L[i++];
    while(j<n2)
        arr[k++] = R[j++];

}

void mergesort(int arr[],int l,int r){
    if( l < r ){
        
        int m = l+ (r-l)/2;   
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);
    
    disp(arr,size);
}