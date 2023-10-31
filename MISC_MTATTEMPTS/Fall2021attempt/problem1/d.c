int foo(int n){
    if (n>0){
        int sum = 0;
        for (int i = 0; sum<n; i++){
            sum = sum + i;
        }
    return i + foo(n-1);
    }
}

/*
Inside the the running time of the if statement is a for loop

whose running time is O(n)

Therefore, the running time is O(n)

*/