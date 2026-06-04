/*
print  inverted number right angle 1
*/

#include <bits/stdc++.h>
using namespace std;

void printSquare (int num) {
    for (int i = num; i > 0; i--) {
        cout << "\n";
        for (int j = 1; j <= i; j++) {
            cout << j; }
    } }

int main () {
    int input1; cin >> input1;
    printSquare(input1);
    return 0;
}