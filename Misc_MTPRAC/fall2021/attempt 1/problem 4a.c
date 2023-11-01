#include <stdlib.h>
#include <stdio.h>

void read_and_print_reverse(int n) {
    int* array = (int*)malloc(sizeof(int) * n);

    printf("Enter %d integers separated by a space: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &array[i]);

    printf("Reverse: ");
    for (int i = n - 1; i >= 0; i--) printf("%d ", array[i]);

    free(array);
}

int main() {
    int n = 0;
    printf("Enter a number between 1-10: ");
    scanf("%d", &n);

    read_and_print_reverse(n);
    return 0;
}