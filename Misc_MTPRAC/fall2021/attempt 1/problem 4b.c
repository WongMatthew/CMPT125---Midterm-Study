// write a function that gets an array of ints and returns the maximum in the input

#include <stdio.h>
#include <stdlib.h>

int * max_prefixes (int * ar, int n){

    // If the size is 0, return NULL
    if (n == 0) return NULL; 
    // Allocate memory
    int* result = (int*) malloc (sizeof(int)*n);
    // Memory allocation failed
    if (result == NULL) return NULL; 

    int max = ar[0];    // create a max value

    for (int i = 0; i < n; i++){
        if (ar[i]> max) max = ar[i];
        result[i] = max;        
    }
    return result;
}

void printArray(int* arr, int size) {
    if (arr == NULL) {
        printf("Array is empty or invalid.\n");
        return;
    }

    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int input[] = {1, 4, 3, 8, 2, 9};
    int size = sizeof(input) / sizeof(input[0]);
    int* output = max_prefixes(input, size);
    printArray(output, size);
    free(output);

    int input1[] = {5, 1, 3, 8, 10, 20, 3, 40, 55, 1, 100};
    int size1 = sizeof(input1) / sizeof(input1[0]);
    int* output1 = max_prefixes(input1, size1);
    printArray(output1, size1);
    free(output1);

    int input2[] = {100, 23, 420, 3, 320, 10, 2, 1000};
    int size2 = sizeof(input2) / sizeof(input2[0]);
    int* output2 = max_prefixes(input2, size2);
    printArray(output2, size2);
    free(output2);


    return 0;
}