// Character right traingle 2.0
#include <bits/stdc++.h>
using namespace std;

void numTri (int n) {
    char print = 65;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
                cout << print;
        } 
            cout << "\n"; 
            print++;
    }
    }

int main() {
    int n; cin >> n;
    numTri (n);
    return 0;
}
