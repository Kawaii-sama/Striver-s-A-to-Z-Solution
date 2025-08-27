//list of divisors
#include <bits/stdc++.h>
using namespace std;

void printDivisors (int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cout << i << " ";
    }
}

int main() {
    int a; cin >> a;
    printDivisors(a);
    return 0;
}



// coding ninjas
int* printDivisors(int n, int &size){
// Write your code here
    size = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) size++;
    }

    int* divisors = new int[size];
    int j = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors[j++] = i;
        }
    }
    return divisors;
}
