// enums (short for enumerations) - A user defined tpye of named integer indentifiers
// Purpose: Helps makes a program more readable
// enums are constants. They are not strings, but can be treated as integers

// =================================================================
// Sample code

// Creating an enum outside of the main function
enum Day{Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat};

#include <stdio.h>

int main(){
    enum Day today = Sun;

    if (today == Sun || today == Sat) printf("It is the weekend!");
    else printf("Gotta go to school today");

    return 0;
}