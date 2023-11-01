bool is_sorted(int* A, int n){
    
    for (int i = 0; i < n-1; i++){
        if (A[i]>A[i+1]) return false;
    }
    return true;
}

// Running time: O(n)