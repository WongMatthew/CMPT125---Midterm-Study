#include <stdio.h>

enum numbers {ZERO, ONE, TWO, THREE};

void foo(int* x, int y){
    int z = 5;
    *x = z;
    y = z;
    x = &y;
}

int main(){
    int a = ONE, b = TWO;
    foo(&a, b);
    printf("a = %d, b = %d", a, b);
    return 0;
}

// The function will return 2, 1