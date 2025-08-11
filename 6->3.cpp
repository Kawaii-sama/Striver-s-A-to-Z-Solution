// binary triangle
#include <bits/stdc++.h>
using namespace std;

void biTri (int n) {
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j <= i ; j++) {
            int c = i + j;
            if ( c % 2 == 0){
                cout <<" 1 ";
            }
            else cout << " 0 ";
        }
        cout << "\n";
    } }

int main() {
    int input1; cin >> input1; int input2;
    for (int i = 0; i < input1; i++) {
        cin >> input2;
        biTri (input2);
        cout << "\n";
    }
    return 0;
}
