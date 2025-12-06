// frequency array of string. (precompute + fetch)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s; char ch1 = 'a';
    // precompute
    int hash[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        hash[s[i] - ch1] += 1;
    }
    
    int n; cin >> n; char ch2;
    // fetch
    while (n > 0) {
        cin >> ch2;
        cout << hash[ch2 - ch1] << " ";
        n--;
    }
    return 0;
    
}
