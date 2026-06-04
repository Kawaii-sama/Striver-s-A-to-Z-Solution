/count digits in a number (striver)
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countDigit (int n) {
        int count = log10(n) + 1;
        return count;
    }
};

int main () {
    Solution s;
    int n; cin >> n;
    cout << s.countDigit(n);

}  