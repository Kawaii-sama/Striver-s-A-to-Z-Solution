/ half diamond
#include <bits/stdc++.h>
using namespace std;

void halfDiamond (int n) {
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j <= i ; j++) {
            cout << " * ";
        }
        cout << "\n";
    }
    
    for ( int k = 0 ; k < n; k++) {
        for (int l = 1; l < n-k; l++) {
            cout << " * ";
        }
        cout << "\n";
    }
}

int main() {
    int input1; cin >> input1; int input2;
    for (int i = 0; i < input1; i++) {
        cin >> input2;
        halfDiamond (input2);
        cout << "\n";
    }
    return 0;
}

/*
1. 4 for loop 2 ascending + 2 descending
*/
