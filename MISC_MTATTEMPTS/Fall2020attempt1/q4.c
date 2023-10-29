/*
Bar n returns i which is the amount of times the code ran

Rewrite the code with a running time of O(1)
*/

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