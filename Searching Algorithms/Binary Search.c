// Notes: Week 5 (2)

// The Jist of it: Keep cutting the array in half and compare the center item.
// Can be done recursively

/* Binary Search
- Suppose we have a sorted array (Ascending) and we want to search it with a key
- Start with checking the middle item.
    - If middle item is < key, cut the array in half and check left side ("Active part")
    - If middle item is > key, cut the array in half and check right side

Main idea:
- Start with the whole array as the "active part"
- Look at the middle of the active
    - If it is a match, done.
    - If not, determine which half to search
- Repeat step 2 until no more items are found

// ==========================================================================

Pseudocode

** Assume the array is assorted in ascending order.
** Let L = left boundary index and R = right boundary index of the active part
** Let R = N-1

while L < R // Which is true, cause it's in ascending order
    mid <- (L + R)/2
    if array[mid] == key: return mid
    else if array[mid] < key: L <- mid + 1      // Make the right half the active part
    else R <- mid -1                            // Make the left half the active part
end while
return -1

// ==========================================================================

Time Complexity: O(logN)

// ========================================================================== */
// Sample code (by https://www.geeksforgeeks.org/binary-search/)

#include <stdio.h>
 
// An iterative binary search function.
int binarySearch(int arr[], int leftIndex, int rightIndex, int key)
{
    while (leftIndex <= rightIndex) {
        int m = leftIndex + (rightIndex - leftIndex) / 2;
        
        if (arr[m] == key)  return m;           // If x is present at mid, complete and finish 
        
        if (arr[m] < key)   leftIndex = m + 1; // If x greater, ignore left half
 
        else rightIndex = m - 1;                // If x is smaller, ignore right half
    }
 
    return -1;// If the element is not found, return -1
}
 
// Driver code
int main(void) {
    int arr[] = { 2, 3, 4, 10, 40 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int result = binarySearch(arr, 0, size - 1, key);
    (result == -1) 
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}