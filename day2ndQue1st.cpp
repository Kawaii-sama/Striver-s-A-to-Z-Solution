/*
print * square
*/

#include <bits/stdc++.h>
using namespace std;

void printSquare (int num) {
    for (int i = 0; i < num; i++) {
        cout << "\n";
        for (int j = 0; j < num; j++) {
            cout << " * "; }
    } }

int main () {
    int input1; cin >> input1;
    printSquare(input1);
    return 0;
}
