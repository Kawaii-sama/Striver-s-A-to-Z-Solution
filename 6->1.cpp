// star diamond
#include <bits/stdc++.h>
using namespace std;

void pyramid (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << "   ";
        }
        
        for (int k = 0; k < (2*i) + 1 ; k++) {
            cout << " * ";
        }
        
        cout << "\n";
    }
}


void invertedPyramid (int n) {
    for (int i = 0; i <= n ; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "   ";
        }
            for (int k = 0; k < 1+((n-i-1)*2); k++) {
                cout << " * ";
            }
            cout << "\n";
    }
}



int main() {
    int input1; cin >> input1;
    pyramid (input1); invertedPyramid (input1);
    return 0;
}
