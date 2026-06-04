// Character right traingle
#include <bits/stdc++.h>
using namespace std;

void numTri (int n) {
    for (int i = 1; i <= n; i++) {
        int count = 0; char print = 65;
        for (int j = 1; j <= i; j++) {
            while ( count < j ) {
                cout << print;
                print++;
                count++;
            }
        } 
             cout << "\n"; }
    }

int main() {
    int n; cin >> n;
    numTri (n);
    return 0;
}
