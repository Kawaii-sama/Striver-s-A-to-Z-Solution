// butterfly 1
#include <bits/stdc++.h>
using namespace std;

void reverseNumGap ( int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n-i; j >= 1; j--) {
            cout << " * "; }
        for (int k = 2*(i); k >= 1; k--) {
            cout << "   "; }
        for (int l = n-i; l >= 1; l--) {
            cout << " * "; }
    cout << "\n";
    }
    
}


void numGap ( int n) {
    for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << " * "; }
            for (int k = 1; k <= 2*(n-i); k++) {
                cout << "   "; }
            for (int l = i; l >= 1; l--) {
                cout << " * "; }
        cout << "\n";
    }
}

int main () {
    int n; cin >> n;
    numGap(n); reverseNumGap(n);
    return 0;
}
