// print 1 to N
#include <bits/stdc++.h>
using namespace std;

void print (int i, int N) {
    if (i > N) return;
    cout << i << " ";
    print (i+1,N);
}

int main() {
    int N; cin >> N;
    print (1,N);
    return 0;
}


// print 1 to N using backtracking + recursion
#include <bits/stdc++.h>
using namespace std;

void print (int i, int N) {
    if (i < 1) return;
    print (i-1,N);
    cout << i << " ";
}

int main() {
    int N; cin >> N;
    print (N,N);
    return 0;
}
