// Number right traingle
#include <bits/stdc++.h>
using namespace std;

void numTri (int n) {
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count++;
        }  cout << "\n"; }
}

int main() {
    int n; cin >> n;
    numTri (n);
    return 0;
}
