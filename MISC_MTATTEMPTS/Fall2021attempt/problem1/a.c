#include <stdio.h>

enum numbers {ZERO, ONE, TWO, THREE};

void foo(int* x, int y){
    int z = 5;
    *x = z; // x = 5
    y = z;  // y = 5
    x = &y; //x = []
}

int main(){
    int a = ONE, b = TWO;   // one = 1, two = 2
    foo(&a, b); // 
    printf("a = %d, b = %d", a, b);
    return 0;
}

