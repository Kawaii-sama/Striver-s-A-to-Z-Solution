
// starRectangle
#include <bits/stdc++.h>
using namespace std;

void starGapSquare (int n) {
    for (int i = 1; i <= n; i++) {
           
           
           if (i == 1 || i ==n) {
               for (int j = 0; j < n; j++) {
                   cout << " * "; }
            } 

            else {
             cout << " * ";
             for (int k = 0 ; k < n-2; k++) {
                cout << "   "; }
             cout << " * "; }
             
             
    cout << "\n" << "\n";
    }
}

int main () {
    int n; cin >> n;
    starGapSquare(n);
    return 0;
}  