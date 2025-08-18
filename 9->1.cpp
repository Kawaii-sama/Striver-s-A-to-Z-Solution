// decreasing alphabet right triangle

#include <bits/stdc++.h>
using namespace std;

void revAlpha (int n) {
    for (int i = 1; i <= n; i++) {
        char print = 65;
        print = print + n - i;
        for ( int j = 1; j <= i; j++) {
            cout << print; print++;
        }
        cout << "\n";
    }
}

int main() {
    int n; cin >> n;
    revAlpha (n);
    return 0;
}
