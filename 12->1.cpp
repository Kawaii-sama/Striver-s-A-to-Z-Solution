//count digits in a number (striver)
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

//Time Complexity of above is Log n

//Brute force:
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count = 0;
    int countDigit (int n) {
        while ( n > 0) {
        n = n/10;
        count++; }
        return count;
    }
};

int main () {
    Solution s;
    int n; cin >> n;
    cout << s.countDigit(n);

}


//Time complexity of above is O(n)
