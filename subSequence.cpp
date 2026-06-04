// priting subsequences of a given sequence.
//striver's method
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

// my own method
// print subsequence // i still dont understand the two blank lines in the output
#include <bits/stdc++.h>
using namespace std;

void printS (int idx, int n, int arr[], vector <int> &ds) {
    if (idx == n) {
        for (auto it: ds)
        cout << it << " ";
        cout << "\n"; // this was the only logical white space in my head i dont know what he did
        if (ds.size() == 0 )
        cout << "{}";
    return;
    }
    
    ds.push_back(arr[idx]);
    printS(idx+1,n,arr,ds);
    ds.pop_back();
    printS(idx+1,n,arr,ds);
    return; //added return statement because it should have been there.
}

int main() {
    int arr[] = {1,2,1}; int n = 3;
    vector <int> ds;
    printS(0,n,arr,ds);
    return 0;
}
