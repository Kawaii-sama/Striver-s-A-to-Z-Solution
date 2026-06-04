// odd inverted * pyramid // Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i <= n ; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "   ";
        }
            for (int k = 0; k < 1+((n-i-1)*2); k++) {
                cout << " * ";
            }
            cout << "\n";
    }
    return 0;
}
