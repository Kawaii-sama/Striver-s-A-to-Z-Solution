// reverse of an array
#include <bits/stdc++.h>
using namespace std;


void reversal (int arr[], int N, int i) {
    if ( i == N ) return;
    reversal (arr, N, i+1);
    cout << arr[i];
}


int main() {
    int N; cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    reversal (arr,N,0);

    return 0;
}