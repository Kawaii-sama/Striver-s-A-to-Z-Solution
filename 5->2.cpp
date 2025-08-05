// complete * erect pyramid
#include <bits/stdc++.h>
using namespace std;

void pyramid (int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }
        
        for (int k = 0; k <= i; k++) {
            cout << " * ";
        }
        
        cout << "\n";
    }
}

int main() {
    int input1; cin >> input1;
    pyramid (input1);
    return 0;
}

