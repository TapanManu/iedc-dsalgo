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


IV.  BUBBLE SORT

Time Complexity: 
    BEST:O(N)
    AVERAGE:O(N^2)
    WORST:O(N^2)

Space complexity:O(1)

Stable : YES

V.  SELECTION SORT

Time Complexity: 
    BEST:O(N^2)
    AVERAGE:O(N^2)
    WORST:O(N^2)

Space complexity:O(1)

Stable: NO

VI. INSERTION SORT

Time Complexity: 
    BEST:O(N)
    AVERAGE:O(N^2)
    WORST:O(N^2)

Space complexity:O(1)

Stable: YES

VII. QUICK SORT

Time Complexity:
    BEST:O(NLOGN)           MIDDLE ELEMENT IS PIVOT
    AVERAGE:O(NLOGN)        ANY ELEMENT CAN BE PIVOT
    WORST:O(N^2)            PICKS GREATEST OR SMALLEST ELEMENT AS PIVOT

Space complexity :
    Recursive : O(N)

Stable : NO

** NB: A Stable Sort is one which preserves the original order of 
input set, where the comparison algorithm 
does not distinguish between two or more items. 
A Stable Sort will guarantee that the original order of data 
having the same rank is preserved in the output.  **


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
    
    