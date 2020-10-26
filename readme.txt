I.  BINARY SEARCH

1)  ITERATIVE
Time complexity: O(logn)    (Average)
Space Complexity: O(1)

2)  RECURSIVE
Time Complexity: O(logn)    (Average)
Space complexity: o(n)      //call stack space 

II. LINEAR SEARCH

Time Complexity: 
    BEST:O(1)
    AVERAGE:O(N)
    WORST:O(N)

Space Complexity: O(1)

III. TERNARY SEARCH (ITERATIVE)

Time complexity: O(log₃n)
Space complexity : O(1)

ADDITIONAL (STL BINARY_SEARCH):
    1) binary_search(start_ptr, end_ptr, num) : 
       This function returns boolean true if the element is present 
       else returns false.
    
    2) lower_bound(start_ptr, end_ptr, num) : 
    Returns pointer to “position of num” 
    if container contains 1 occurrence of num. 
    Returns pointer to “first position of num” 
    if container contains multiple occurrence of num. 
    Returns pointer to “position of next higher number than num” 
    if container does not contain occurrence of num.

    3)  upper_bound(start_ptr, end_ptr, num) : 
    Returns pointer to “position of next higher number than num” 
    if container contains 1 occurrence of num. 
    Returns pointer to “first position of next higher number 
    than last occurrence of num” 
    if container contains multiple occurrence of num. 
    Returns pointer to “position of next higher number than num” 
    if container does not contain occurrence of num. 

    Subtracting the pointer to 1st position i.e “vect.begin()” 
    returns the actual index.
    
    