// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void printS (int idx, vector<int> &ds, int s, int sum, int arr[], int n) {
    if (idx == n) {
        if ( s == sum ) {
            for (auto it : ds) cout << it << " ";
            cout << "\n";
        }
        return;
    }
    
    ds.push_back (arr[idx]);
    s += arr[idx];
    printS(idx+1,ds,s,sum,arr,n);
    ds.pop_back();
    printS(idx+1,ds,s,sum,arr,n);
    
}

int main() {
    int arr[] = {1,2,1};
    int n = 3; int sum = 2;
    vector<int> ds;
    printS (0, ds, 0, sum, arr, n);
    return 0;
}