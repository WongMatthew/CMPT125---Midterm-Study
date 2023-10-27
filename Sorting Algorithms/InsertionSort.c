/* 
Sorting Algorithm: Insertion Sort

1. Pick an item from the unsorted array
2. Place it in the correct spot
3. Repeat until all elements in the unsorted array are gone

*/
//===========================================================

// Type: Iterative

//===========================================================
/*
Time Complexity:
Worst case:     O(N^2)      The item has to swap it to the front (The array is reversed)
Best case:      O(N)        The item is in the right spot (Array is alreadt sorted)
*/
//===========================================================
// Sample code (by ChatGPT)

#include <stdio.h>

void insertionSort(int array[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;

        /* Move elements of array[0..i-1] that are greater than key to one
           position ahead of their current position */
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

// Printing

int main() {
    int array[] = {12, 11, 13, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    insertionSort(array, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}