// Will the code compile?

// First guess: No because there is a 0

#include <stdio.h>

int main() {
    char str[10] = {'a', 'b', 'c', 0, '1', '2'};
    char * ptr = str;
    printf("%s\n", ptr+1);
    return 0;
}

// Answer: Yes, it will return bc

// Explanation: 0 in the str array is a null character.

// Without it, it would return the entirety of the string (abc12)

// Because there is a null character (0) in it, 
// it will usually stop after printing out      bc
// But because the ptr is ptr+1, it skips a and just prints     bc