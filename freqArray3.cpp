// frequency array of string, lowercase only. (precompute + fetch)
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


// frequency array of string, all cases. (precompute + fetch)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s; char ch1 = 'a';
    // precompute
    int hash[256] = {0};
    for (int i = 0; i < s.length(); i++) {
        hash[s[i]] += 1;
    }
    
    int n; cin >> n; char ch2;
    // fetch
    while (n > 0) {
        cin >> ch2;
        cout << hash[ch2] << " ";
        n--;
    }
    return 0;
    
}
