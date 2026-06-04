// starCross
#include <bits/stdc++.h>
using namespace std;

void starCross (int n) {
    int shu = 1; int a , d;
    for (int i = 0; i < n; i++) {
        
        if (i <= (n-1)/2) {
        for(int k = 0; k < i; k++)  cout <<  " "; }
        else { for (int l = n-i; l > 1; l --) cout << " "; }
        cout << "*";
        
        
        if (i <= (n-1)/2) { a = n-2; d = -2;}
        else { a = 1; d = 2;}
        for (int j = 0; j < a + ((shu - 1) * d); j++) cout << " ";
        
        
        if (i != (n-1)/2) cout << "*";
        if ( i == (n-1)/2 ) shu = 1;
        else shu++;
        cout << "\n";
    }
}

int main() {
    int n; cin >> n;
    starCross (n);

    return 0;
}


// starCross2
#include <bits/stdc++.h>
using namespace std;
/*
1. in a matrix of two for loops.
2. when i == j print * else " "
3. exit
*/

void starCross (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ( i == j || i + j == n - 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n; cin >> n;
    if ( n % 2 != 0) starCross (n);
    return 0;
}
