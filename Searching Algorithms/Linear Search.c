// Notes: Week 5 (2)

/*
Notes:
- Linear search is slower than me trying to grasp the concept of coding
- It is slow because it is looking at each data once

// ============================================================================

Linear Search (v1: Boolean)

Main Idea:
- Go through array
- Upon finding match with key, return true.
- If it gets to the end of the array and it does not find a match, return false.

**

Pseudocode:

for i = 0 to N-1
    if array[i] == key
        return true
    end if
end for
return false

// ============================================================================

Linear Search (v2: Index)

Main Idea:
- Go through array
- Upon finding match with key, return index.
- If it gets to the end of the array and it does not find a match, return -1

**

Pseudocode

for i = 0 to N-1
    if array[i] == key
        return i
    end if
end for
return -1

// ============================================================================

Time Complexity:
Best case: O(1)
- First array item matches with the key (return array[0])
Worse case: O(N)
- Last array matches with the key
- No item matches with the key

*/
// ============================================================================
// Sample Code (from https://www.geeksforgeeks.org/linear-search/) 

#include <stdio.h> 
  
int search(int arr[], int size, int key) {   
    for (int i = 0; i < size; i++) 
        if (arr[i] == key) 
            return i; 
    return -1; 
} 
  
// Driver code 
int main(void) { 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int key = 10; 
    int size = sizeof(arr) / sizeof(arr[0]); 
  
    // Function call 
    int result = search(arr, size, key); 
    (result == -1) 
        ? printf("Element is not present in array") 
        : printf("Element is present at index %d", result); 
    return 0; 
}