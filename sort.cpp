#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void swap(int *x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void disp(int arr[],int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

void insertion(int arr[], int n)  {  
    int cnt=0;
    int check=0;
    int i, key, j;  
    for (i = 1; i < n; i++) {  
        key = arr[i];  
        j = i - 1;  
        cnt++;
        check++;
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) {  
            arr[j + 1] = arr[j];
            check++;  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
    cout<<endl;
    cout<<"no of checks:"<<check<<endl;
    cout<<"no of exchanges:"<<cnt<<endl;
    disp(arr,n);
}  

void bubble(int *arr,int size){
int cnt = 0;
int check=0;
int flag=0;
for(int i=0;i<size;i++){
    flag=0;
    check++;
    for(int j=0;j<(size-i-1);j++){
        check++;
        if(*(arr+j)>*(arr+j+1)){
            cnt++;
            flag=1;
            swap(arr+j,arr+j+1);
        }
    }
    if(flag==0)
        break;
}
    cout<<endl;
    cout<<"no of checks:"<<check<<endl;
    cout<<"no of exchanges:"<<cnt<<endl;
    disp(arr,size);
}

void selection(int arr[],int size){
    int cnt=0;
    int check=0;
    int small=0;
    for(int i=0;i<size-1;i++){
        small=i;
        check++;
        for(int j=i+1;j<size;j++){
            check++;
            if(arr[j]<arr[small]){
                cnt++;
                swap(arr[j],arr[small]);
            }
        }
    }
    cout<<endl;
    cout<<"no of checks:"<<check<<endl;
    cout<<"no of exchanges:"<<cnt<<endl;
    disp(arr,size);

}

int main(){
    int arr1[]={4,3,2,1};       //worst case
    int arr2[]={3,7,6,1};       //average case
    int arr3[]={1,2,3,7};       //best case
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);
    int s3 = sizeof(arr3)/sizeof(arr3[0]);
   /* cout<<"BUBBLE SORT"<<endl;
    bubble(arr1,s1);
    bubble(arr2,s2);
    bubble(arr3,s3);

    cout<<"SELECTION SORT"<<endl;
    selection(arr1,s1);
    selection(arr2,s2);
    selection(arr3,s3);*/

    cout<<"INSERTION SORT"<<endl;
    insertion(arr1,s1);
    insertion(arr2,s2);
    insertion(arr3,s3);

}
/*
BUBBLE SORT

no of checks:10                     O(N^2)
no of exchanges:6
1       2       3       4

no of checks:10                     O(N^2)
no of exchanges:4
1       3       6       7

no of checks:4                      O(N)
no of exchanges:0
1       2       3       7

SELECTION SORT  

no of checks:9                      O(N^2)
no of exchanges:6
1       2       3       4

no of checks:9                      O(N^2)
no of exchanges:4
1       3       6       7

no of checks:9                      O(N^2)
no of exchanges:0
1       2       3       7

*/
