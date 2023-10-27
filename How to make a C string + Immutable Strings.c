// C strings

// Three ways to create a C strings

int main(){

    // Method 1: Initialized with size and value
    char str1[5] = {'w','o','r','d','\0'};      // An array of 5 initialized with values
    char str1_2[10] = {'w','o','r','d','\0'};     // An array of 5 intialized with values, but can store up to 10 elements (up to 9)

    // Method 2: Implictly
    char str2[] = {'w','o','r','d','\0'};

    // Method 3: Using a string literal. This is immutable.
    char * str3 = "word";
    // Trying to do str3[3] = 'k'; in attempt to trying to change the word to "work" will cause a segmentation fault
    // Segmentation fault: Crash due to an attempt to modify read-only memory locations

    // Doing printf("%c\n", str3[3]); is OK because it is just reading the value from the memory location
}

/*
Check your understanding - 

char * word1 = "Hello";
char word2[6] = {'H','e','l','l','o','\0'};
char word3[] = "Hello";

Which of the following will work?

 - strcpy (word1, "hey");                   <-- This will work

 - strcmp (word1, word2);                   <-- This will  work

 - word3[3] = 'p', word3[4] = '\0';         <-- This will NOT work - causes a segfault
 
 - word2[0] = "h";                          <-- This will work

*/

