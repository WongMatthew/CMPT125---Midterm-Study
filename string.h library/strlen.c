// The string.h library - strlen()

// THE LENGTH-COUNTER FUNCTION

// strlen(const char* str) - Returns the number of characters in the C string (Excluding null character ‘\0’)

#include <string.h>
#include <stdio.h>

int main(){
    
    char str1[20] = "Hello World!"; // str1 can store at most up to 19 
    int length = strlen(str1);
    printf("str1 is %s and has a length of %d.\n", str1, length);


    str1[7] = '\0'; // Make the 7th element a null character
    int length2 = strlen(str1);
    printf("str1 is %s and now has a length of %d.\n", str1, length2);

    return 0;
}

/*
output:

str1 is Hello World! and has a length of 12.
str1 is Hello W and now has a length of 7.

*/
