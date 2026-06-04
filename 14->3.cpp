// print from N to 1 using recursion
#include <iostream>
using namespace std;

void print(int N) {
    if ( N < 1) return;
    cout << N << " ";
    N--;
    print(N);
}

int main() {
    int N; cin >> N;
    print(N);
    return 0;
}



// print N to 1 using recursion + backtracking
#include <bits/stdc++.h>
using namespace std;

void print (int i, int N) {
   if ( i > N) return;
   print(i+1,N);
   cout << i << " ";
}


int main() {
    int N; cin >> N;
    print(1,N);
    return 0;
}