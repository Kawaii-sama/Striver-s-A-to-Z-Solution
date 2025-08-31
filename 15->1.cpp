//sum of natural numbers
#include <bits/stdc++.h>
using namespace std;

int sum = 0;
int sumNumbers (int i, int N) {
    if (i > N) return sum;
    sum += i;
    sumNumbers(i+1,N); //++i because it would mutate i
    return sum;
}

int main() {
    int N; cin >> N;
    cout << sumNumbers(1,N);
    return 0;
}
