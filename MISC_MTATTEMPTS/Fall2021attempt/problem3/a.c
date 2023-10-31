#include <stdio.h>
#include <string.h>

int longest_common_prefix(const char* str1, const char* str2){
    int prefix = 0;
    int i = 0;

    while (str1[i] == str2[i] && str1[i] != 0){
        prefix++;
        i++;
    }
    return prefix;
}