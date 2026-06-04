//armstrong
#include <bits/stdc++.h>
using namespace std;

int expo;


void countDigits(int n) {
    int count = 0;
        while ( n > 0 ) {
            n = n / 10;
            count++;
        }
    expo = count;
}

bool armStrong(int n) {
    int edit; edit = n;
    int digit = 0;
    while ( edit > 0 ) {
    int num = edit % 10;
    digit = digit + pow(num,expo);
    edit = edit / 10; }
    
    if (digit == n) return 1;
    else return 0;
}

int main() {
    int a; cin >> a;
    countDigits(a);
    cout << armStrong (a);
    return 0;
}
