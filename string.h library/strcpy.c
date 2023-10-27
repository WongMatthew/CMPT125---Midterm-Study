// The string.h library - strcpy

// THE COPY FUNCTION

// strcpy(char* dest, const char* src) - Copies the C string into another array pointed to by a char pointer

#include <string.h>
#include <stdio.h>

int main(){

    char str1[] = "Hello";
    char str2[50];              // Ensure there is sufficent space
    char str3[50]; 

    // Method 1: Copy something from another value
    strcpy(str2, str1);         // Copy the contents of str1 into str2
    printf("%s\n", str2);
    // output: Hello

    // Method 2: Copy something directly into it
    strcpy(str3, "World");      // Add World to str3
    printf("%s\n", str3);
    // output: World

    // Question1: What if the contents of a value already exists?
    char replace[100] = "replace me";
    char replaced[100] = "you have been replaced";
    printf("Content of replace is %s.\n", replace);
    // output: Content of replace is Replacement.


    strcpy(replace, replaced);      // Copy the contents of replaced into replace
    printf("Contents of replace is now %s.\n", replace);
    // output: Contents of replace is now Replaced.


    return 0;
}