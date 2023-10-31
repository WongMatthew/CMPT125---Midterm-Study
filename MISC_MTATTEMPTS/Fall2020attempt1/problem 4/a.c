#include <stdio.h>

void str_reverse_iter(char *str) {
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') length++; 
    

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char myString[] = "Hello, World!";
    printf("Original: %s\n", myString);
    str_reverse_iter(myString);
    printf("Reversed: %s\n", myString);

    return 0;
}