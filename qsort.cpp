#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int check=0;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp; 
}

void disp(int *arr,int size){
    for(int i=0;i<size;i++)
        cout<<*(arr+i)<<"\t";
    cout<<endl;
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=i+1; j<high ; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void rec_quick_sort(int arr[],int low,int high){
    if(low < high){
        check++;
        int p = partition(arr,low,high);
        rec_quick_sort(arr,low,p-1);
        rec_quick_sort(arr,p+1,high);
    }
    
}

void quickSortIterative(int arr[], int l, int h) 
{ 
    // Create an auxiliary stack 
    int stack[h - l + 1]; 
  
    // initialize top of stack 
    int top = -1; 
  
    // push initial values of l and h to stack 
    stack[++top] = l; 
    stack[++top] = h; 
  
    // Keep popping from stack while is not empty 
    while (top >= 0) { 
        // Pop h and l 
        check++;
        h = stack[top--]; 
        l = stack[top--]; 
  
        // Set pivot element at its correct position 
        // in sorted array 
        int p = partition(arr, l, h); 
  
        // If there are elements on left side of pivot, 
        // then push left side to stack 
        if (p - 1 > l) { 
            stack[++top] = l; 
            stack[++top] = p - 1; 
        } 
  
        // If there are elements on right side of pivot, 
        // then push right side to stack 
        if (p + 1 < h) { 
            stack[++top] = p + 1; 
            stack[++top] = h; 
        } 
    } 
} 

int main(){
    int arr[] = {7,1,2,4,5,3,8,9,6};      //O(nlogn) average case
    int n = sizeof(arr)/sizeof(arr[0]);
    check=0;
    rec_quick_sort(arr,0,n-1);
    //quickSortIterative(arr,0,n-1);
    cout<<"no of checks:"<<check<<endl;
    disp(arr,n);
    return 0;
}

