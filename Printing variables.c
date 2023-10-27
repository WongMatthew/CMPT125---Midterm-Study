// Using printf() 

#include <stdio.h>

int main(){
    int magicNum = 42;
    printf("The magic number is %d!\n", magicNum); // Requires stdio.h


    int i1 = 4, i2 = 6, i3 = 10;
    printf("To print integers like %d, %d, or %d, you need to use %%d.\n", i1, i2, i3);
         // To print integers like 4, 6, or 10, you need to use %d.

    float f1 = 2.45, f2 = 4.57, f3 = 103.3;
    printf("To print decimals like %f, %.1f, or %.2f, you need to use %%f. and do %%.xf to change the number of decimals.\n", f1, f2, f3);
         // To print decimals like 2.450000, 4.6, or 103.30, you need to use %f. and do %.xf to change the number of decimals.

    float sn1 = 15000000; float sn2 = -15000000; double sn3 = 25.2132; double sn4 = 0.00001302;
    printf("To print with scientific notation like %e, %e, %e, or %e, you need to use %%e.\n", sn1, sn2, sn3, sn4);
         // To print with scientific notation like 1.500000e+007, -1.500000e+007, 2.521320e+001, or 1.302000e-005, you need to use %e.

    char c1 = 'a', c2 = 'P', c3 = '$';
    printf("To print characters like %c, %c, or %c, you need to use %%c.\n", c1, c2, c3);
         // To print characters like a, P, or $, you need to use %c.

    char s1[] = "Jason is cute", s2[] = "Emily is sus", s3[] = "There are 7 apples in the ditch";
    printf("To print strings like %s, %s, or %s, you need to use %%s.\n", s1, s2, s3);

    printf("You need %%p to print pointers, %%ld to print longs, and %%hd to print shorts.\n");

}

