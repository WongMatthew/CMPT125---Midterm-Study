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

*/