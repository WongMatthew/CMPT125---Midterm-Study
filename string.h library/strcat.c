// The string.h library - strcat()

// THE ADDER FUNCTION

// strcat(char* dest, const char* src) - Appends a copy of the C string to another C string

#include <string.h>
#include <stdio.h>

int main(){

    char str1[20] = "";
    printf("str1 is %s and has a length of %d.\n", str1, (int)strlen(str1));
    // output: str1 is  and has a length of 0.


    char str2[] = "Hello";
    strcat(str1, str2);
    printf("str1 is now %s and has a length of %d.\n", str1, (int)strlen(str1));
    // output: str1 is now Hello and has a length of 5.


    char str3[] = " World!";
    strcat(str1, str3);
    printf("str1 is now %s and has a length of %d.\n", str1, (int)strlen(str1));
    // output: str1 is now Hello World! and has a length of 12.


    return 0;
}
