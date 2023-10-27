/*
Sorting Algorithm: Selection Sort  

1. Search for the smallest value from the first to last element,
2. Swap value with first element, call on next element as the first element
3. Rinse and repeat
*/
//===========================================================

// Type: Iterative

//===========================================================
/*
Time Complexity: O(N^2) 
There is no best or worst case scenario since selection sort 
makes the same number of comparisons and swaps regardless of size

Performance is consistent
*/
//===========================================================
// Sample Code (by ChatGPT)

#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // One by one move the boundary of the unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted part of the array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(&arr[i], &arr[min_idx]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n);

    printf("\nSorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}