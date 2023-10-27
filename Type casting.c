// Type Casting

#include <stdio.h>

// short has 2 bytes
// int has 4 bytes 
// long has 8 bytes
// double has 8 bytes
// char has 1 byte

int main(){
    int anInt = 634;
    float aFloat = (float) anInt;       // Type cast anInt into a float
    long aLong = (long) anInt;          // Type cast anInt into a long

    printf("anInt: %d, aFloat: %f, aLong = %ld.\n", anInt, aFloat, aLong);
         // anInt: 634, aFloat: 634.000000, aLong = 634

    short aShort = 0;
    int aDiffInt = (int) aShort;        // Memory will be lost since short has less bytes than int
    
    printf("aShort = %hd, aDiffInt = %d\n", aShort, aDiffInt);
         // aShort = 0, aDiffInt = 0
}