
merge (int arr[], int l, int mid, mid+1, int h) {
    if ( left <= mid && right <= h) {
    if (arr[left] < arr[right]) left++;
    else right++; }

    if (left < mid) { arr.push_back (arr[left]); left++;}
    else  { arr.push_back (arr[right]); right++;}
    
}




mS (int arr[], int l, int h) {
    if (l< h) {
        int mid = (l + h) / 2;
        mS (arr, l , mid);
        mS (arr, m+1, h);
        merge (arr, l, mid, mid+1, h);
    }
}









/*
pseudocode:-
1. mergeSort {
    2. if condition
    3. mid calculation
    4. mergeSort (for first half)
    5. mergeSort (for second half)
    6. merge (two sorted halves)
}

*/