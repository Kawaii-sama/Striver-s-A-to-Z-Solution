//factorial of natural numbers (paramatrzied + functional recursive)
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


// paramatrized recursion , factorial
#include <bits/stdc++.h>
using namespace std;

int result = 1;
void fact (int i, int n) {
    if (i > n) {
        cout << result;
        return;
    }
    result *= i;
    fact (i+1,n);
    
}

int main () {
    int n; cin >> n;
    fact (1,n);
}



// functional recursion , factorial
#include <bits/stdc++.h>
using namespace std;

int fact (int i) {
    if (i < 1) return 1;
    return i * fact (i-1);
    
}

int main () {
    int n; cin >> n;
    cout << fact (n);
}

