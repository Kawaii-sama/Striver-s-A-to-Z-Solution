// frequency array
#include <bits/stdc++.h>
using namespace std;

int freArray (int arr[], int check, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == check) count++;
    }
    return count;
}


int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
    }
    
    int check; cin >> check;
    cout << freArray ( arr, check, n);
    
    /*
    1. creating an array
    2. adding element to array
    3. counting frequency of array
    4. returning frequency of array
    */

    return 0;
}
