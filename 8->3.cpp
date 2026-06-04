// Character pyramid
#include <bits/stdc++.h>
using namespace std;

void alphaPyramid ( int n) {
    for (int i = 0; i < n; i++) {
        char print = 64;
        for (int j = 1; j <= 1; j++) {
            for (int k = 1; k <= n-i; k++) {
                cout << " "; }
            for (int l = 1; l <= i; l++) {
                print++;
                cout << print; 
                 }
            for (int m = 1; m < i; m++) {
                print=print-1; cout << print; }
        }
        cout << "\n";
    }
}

int main() {
    int n; cin >> n;
    alphaPyramid (n);
    return 0;
}
