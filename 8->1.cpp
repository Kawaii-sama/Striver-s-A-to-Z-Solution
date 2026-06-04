// Character inverted right traingle
#include <bits/stdc++.h>
using namespace std;

void numTri (int n) {
    for (int i = n; i >= 1; i--) {
        char print = 65;
        for (int j = 1; j <= i; j++) {
                cout << print;
                print++;
        } 
             cout << "\n"; }
    }

int main() {
    int n; cin >> n;
    numTri (n);
    return 0;
}
