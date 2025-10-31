// count of subsequence with specified sum
#include <bits/stdc++.h>
using namespace std;

int printS (int idx, int s, int sum, int arr[], int n) {
    if (s > sum) return 0;
    
    if (idx == n) {
        if(s == sum) return 1;
        else return 0;
    }
    
    s+= arr[idx];
    int l = printS(idx+1,s,sum,arr,n);
    s -= arr[idx];
    int r = printS(idx+1,s,sum,arr,n);
    return l + r;
}

int main() {
    int arr[] = {1,2,1}; int n = 3; int sum = 2;
    cout << printS(0,0,sum,arr,n);
    return 0;
}
