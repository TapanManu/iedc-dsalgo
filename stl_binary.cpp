#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*familairising STL functions for Binary Search
    case I. binary_search - returns bool true if element exists or not
    case II.upper bound
    case III.lower bound
*/

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    vector<int> temp  = {1,1,1,2,2,2};
    //CASE I : binary_search(start_ptr, end_ptr, num)

    if(binary_search(arr.begin(),arr.end(),7))
        cout<<"element exists"<<endl;
    else
        cout<<"element does not exists"<<endl;

    //CASE II.lower_bound(start_ptr, end_ptr, num)
    //i)    no occurence case - returns position of higher ele in container 
    cout << lower_bound(arr.begin(), arr.end(), 20)  
            - arr.begin()<<endl;

    cout << lower_bound(arr.begin(), arr.end(), 0)  
            - arr.begin()<<endl;

    //ii)   multiple occurrence case - returns first position
    cout << lower_bound(temp.begin(), temp.end(), 1)  
            - temp.begin()<<endl;

    //iii) single occurence - returns exact position
    cout << lower_bound(arr.begin(), arr.end(), 7)  
            - arr.begin()<<endl;
    
    // Subtracting the pointer to 1st position 
    // “vect.begin()” returns the actual index.

    //CASE III UPPER BOUND
    //i)  no occurence case - returns position of higher ele in container 

    cout << upper_bound(temp.begin(), temp.end(), 3)  
            - temp.begin()<<endl;

    //ii)  multiple occurrence case - first position of next 
    //      higher number than last occurrence of num
    cout << upper_bound(temp.begin(), temp.end(), 1)  
            - temp.begin()<<endl;

    //iii) single occurence - position of next higher number than num
    cout << upper_bound(arr.begin(), arr.end(), 7)  
            - arr.begin()<<endl;

    return 0;
}