//sum of natural numbers , paramatrized-functional recursion
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

/*
we can also do this question by:
1. normal for loop
2. by n*(n-1) / 2 formula
3. functional recursion
4. paramatrized recursion
*/

// paramatrized recursion , print sum of first N integers
#include <bits/stdc++.h>
using namespace std;

void printSum (int i, int sum) {
    if (i < 1) {
        cout << sum;
        return;
    }
    printSum (i-1,sum+i);
}

int main () {
    int n; cin >> n;
    printSum(n,0);
}





// functional recursion , print sum of first N integers
#include <bits/stdc++.h>
using namespace std;

int printSum (int i) {
    if (i < 1) return 0;
    return i + printSum (i-1);
    
}

int main () {
    int n; cin >> n;
    cout << printSum(n);
}

