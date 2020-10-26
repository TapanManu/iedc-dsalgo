#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int cnt=0;          //display no of times loop executed

int iter_binary(int arr[],int size,int ele){
    
    int beg = 0;
    int last = size-1;
    int mid = (beg+last)/2;
    while( beg <= last ) {
        cnt++;                    
        if(arr[mid] == ele){
            return mid;       //found
        }
        else if( ele >= arr[mid]){
            beg = mid+1;
        }
        else if( ele < arr[mid]){
            last = mid-1;
        }
        mid = (beg+last)/2;
    }
    return -1;                  //element not found
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = iter_binary(arr,size,1);
    //int res = iter_binary(arr,size,4);
    //int res = iter_binary(arr,size,7);
    //int res = iter_binary(arr,size,8);
    cout<<"no of search cases:"<<cnt<<endl;
    (res==-1)?cout<<"no element found"
             :cout<<"element found at "<<res<<endl;

    return 0;
}