// Notes: Week 5 (2)

// ============================================================================
/* 
Linear Search (v1: Boolean)

Main Idea:
- Go through array
- Upon finding match with key, return true.
- If it gets to the end of the array and it does not find a match, return false.

**

Pseudocode:

for i = 0 to N-1 {
    if array[i] == key, return i
}
return -1

// ============================================================================
Linear Search (v2: Index)

Main Idea:
- Go through array
- Upon finding match with key, return index.
- If it gets to the end of the array and it does not find a match, return -1
*/
// ============================================================================
/*
Time Complexity:
Best case: O(I)
- First array item matches with the key (return array[0])
Worse case: O(N)
- Last array matches with the key
- No item matches with the key
*/
// ============================================================================
/*
Notes:
- Linear search is slower than me trying to grasp the concept of coding
- It is slow because it is looking at each data once
*/
// ============================================================================
/* Pseudocode

for i = 0 to N-1 {
    if array[i] == key, return i
}
return -1
*/