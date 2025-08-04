// full inverted * left inclined pyramid 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < i; j++) {
            cout << " "; // 1 gap
        }
            for (int k = 0; k < n-i; k++) {
                cout << " * ";
            }
            cout << "\n";
    }
    return 0;
}
