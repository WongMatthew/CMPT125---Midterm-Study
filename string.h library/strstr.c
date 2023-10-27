// The string.h library - strstr()

// (const char* str1, const char* str2) - Returns a pointer to the first occurrence of a C string within another C string

#include <string.h>
#include <stdio.h>

int main(){

    char str1[] = "This is a very very important message.";
    printf("str1 is %s and has a length of %d.\n", str1, (int)strlen(str1));
    // output: str1 is This is a very very important message. and has a length of 38.

    // **

    char *replace = strstr(str1, "very");
    strncpy(replace, "VERY", 4); // Indicate that only four characters are to be replaced
    printf("str1 is now %s and has a length of %d.\n", str1, (int)strlen(str1));
    // output: str1 is now This is a VERY very important message. and has a length of 38.

    // **

    // strstr part 2 - What if a string is not found inside another string when using strstr? Answer: It returns a null pointer

    char *key = "super";                // Create a char pointer named key with value "super"
    char *match = strstr(str1, key);    // Create a char pointer named match to check if the key is in str1

    if (match == NULL) printf("The string %s is not found in %s.\n", key, str1);
    else printf("There is at least 1 occurence of %s in %s.\n", key, str1);
    // output: The string super is not found in This is a VERY very important message..

    // **

    // Questions

    // Question 1: What happens if the indicated numbers are bigger than the replacement letter count?
    // Instead of 4 on line 14, what if we did 6?
    // Answer: It breaks :(

    char *replace2 = strstr(str1, "very");
    strncpy(replace2, "VERY", 6); // Indicate that six characters are to be replaced
    printf("str1 is now %s and has a length of %d.\n", str1, (int)strlen(str1));
    // output: str1 is now This is a VERY VERY and has a length of 19.

    return 0;
}
