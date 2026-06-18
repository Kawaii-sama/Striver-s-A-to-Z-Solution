
void merge (vector <int> &arr, int low, int mid, int high) {
    vector <int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= h) {
    if (arr[left] <= arr[right]) {
        temp.push_back (arr[left]); left++;
    }
    else
        temp.push_back (arr[right]); right++;
    }

    while (left <= mid) { 
        temp.push_back (arr[left++]);}

    
    while (right <= high) { 
        temp.push_back (arr[right++]);}

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}



void mergeSort (vector <int> &arr, int low, int high) {
    if (low >= high) return;

    int mid = low + high / 2;
    mergeSort (arr, low, mid);
    mergeSort (arr, mid + 1, high);
    merge (arr, low, mid, high);
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