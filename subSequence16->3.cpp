#include<bits/stdc++.h>
using namespace std;

void subSeq (int ind, vector<int> &ds, int arr[], int n) {
    if (ind == n) {
        for (auto it : ds) {
            cout << it << " "; }
        if (ds.size() == 0) { cout << "{}"; }
        cout << "\n"; return;
    }

    ds.push_back (arr[ind]); subSeq (ind+1, ds, arr, n);
    ds.pop_back(); subSeq (ind+1, ds, arr, n);
}

int main () {
    int arr[] = {3,1,2}; int n = 3;
    vector<int> ds;
    subSeq (0, ds, arr, n);
    return 0;
}