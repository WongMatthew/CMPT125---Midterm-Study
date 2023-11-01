// Consider the following function:

int bar (int n){
    int index = 0, sum = 0;
    while (2 * sum - index < n){
        index++;
        sum += index;
    }
    return index;
}

// Test area
#include <stdio.h>  
int main(){
    int answer = bar(10);
    printf("%d",answer);
}

/*
while 2(sum) - index < 10
while 2(0) - 0 < 10 true, index = 1, sum = 1
while 2(1) - 1 < 10 true, index = 2, sum = 3
while 2(3) - 2 < 10 true, index = 3, sum = 6
while 2(6) - 3 < 10 true, index = 4, sum = 10
while 2(10) - 4 < 10 false, stop

First attempt: returns 10?

oops, it returns the index LOL

Answer: 4
*/