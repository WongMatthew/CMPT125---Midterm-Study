// The string.h library - strcmp()

// THE COMPARE FUNCTION

// strcmp(const char* str1, const char* str2) - Compares two C strings and returns an integer indicating if they have the same sequence of characters.

#include <string.h>
#include <stdio.h>

int main(){

    char *password = "ABBBAC";
    char *guess = "ABC";

    int value = strcmp(password, guess);                // Comparing password and guess

    if (value == 0) printf("You got it right!\n");        // strmp() returns 0 if the strings are equal
    if (value != 0) printf("You got it wrong...\n");      // strmp() returns a non-zero value if the strings are NOT equal
    // output: You got it wrong...


    char str1[] = {'A','B','C','\0'};
    int value2 = strcmp(str1,guess);
    if (value2 == 0) printf("You got it right!\n");        // strmp() returns 0 if the strings are equal
    if (value2 != 0) printf("You got it wrong...\n");

}

