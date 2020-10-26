#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int cnt=0;          //display no of times loop executed

int rec_binary(int arr[],int beg,int last,int ele){
    cnt++;
    int mid = (beg+last)/2;
    if(beg > last)
        return -1;          //not found
    if(arr[mid]==ele)
        return mid;
    else if( arr[mid] > ele )
        return rec_binary(arr,beg,mid-1,ele);
    else if( arr[mid] <= ele )
        return rec_binary(arr,mid+1,last,ele);
        
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = rec_binary(arr,0,size-1,1);
    //int res = rec_binary(arr,0,size-1,4);
    //int res = rec_binary(arr,0,size-1,7);
    //int res = rec_binary(arr,0,size-1,8);
    cout<<"no of search cases:"<<cnt<<endl;
    (res==-1)?cout<<"no element found"
             :cout<<"element found at "<<res<<endl;

    return 0;
}