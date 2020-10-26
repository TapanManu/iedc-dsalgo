#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int cnt=0;          //display no of times loop executed

int iter_ternary(int arr[],int size,int ele){
    
    int beg = 0;
    int last = size-1;
    while( beg <= last ) {
        int mid1 = beg+ (last-beg)/3;
        int mid2 = last - (last-beg)/3;
        cnt++;                    
        if(arr[mid1] == ele)
            return mid1;       //found
        if(arr[mid2]==ele)
            return mid2;

        if( ele < arr[mid1] ){
            last = mid1-1;
        }
        else if( ele > arr[mid2]){
            beg = mid2+1;
        }
        else {
            beg = mid1+1;
            last = mid2-1;
        }
    }
    return -1;                  //element not found
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = iter_ternary(arr,size,1);
    //int res = iter_ternary(arr,size,4);
    //int res = iter_ternary(arr,size,7);
    //int res = iter_ternary(arr,size,8);
    cout<<"no of search cases:"<<cnt<<endl;
    (res==-1)?cout<<"no element found"
             :cout<<"element found at "<<res<<endl;

    //TASK : IMPLEMENT RECURSIVE TERNARY SEARCH

    return 0;
}