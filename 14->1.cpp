//prime check
#include <bits/stdc++.h>
using namespace std;

bool primeCheck (int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int a; cin >> a;
    cout << primeCheck(a);
    return 0;
}


// new definition
//prime check
#include <iostream>
using namespace std;

bool primeCheck(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }
    if (count == 2) return 1;
    return 0;
}

int main() {
    int a; cin >> a;
    cout << primeCheck(a);
    return 0;
}