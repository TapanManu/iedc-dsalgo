#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int cnt=0;          //display no of times loop executed

int linear(int arr[],int size,int ele){
    
    for(int i=0;i<size;i++){
        cnt++;
        if(arr[i]==ele)
            return i;           //element found
    }

    return -1;                  //element not found
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = linear(arr,size,1);
    //int res = linear(arr,size,4);
    //int res = linear(arr,size,7);
    //int res = linear(arr,size,8);
    cout<<"no of search cases:"<<cnt<<endl;
    (res==-1)?cout<<"no element found"
             :cout<<"element found at "<<res<<endl;

    return 0;
}