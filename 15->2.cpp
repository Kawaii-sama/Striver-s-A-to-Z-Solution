//factorial of natural numbers
#include <bits/stdc++.h>
using namespace std;

int fact = 1;
int factNumbers (int i, int N) {
    if (i > N) return fact;
    fact *= i;
    factNumbers(i+1,N); //++i because it would mutate i
    return fact;
}

int main() {
    int N; cin >> N;
    cout << factNumbers(1,N);
    return 0;
}
