// palindrome (leetcode)

class Solution {
public:
    int number = 0; int extract = 0;
    int reverse(int x) {
    int original = x;
    do {
    int extract = x % 10;
    if (number > INT_MAX / 10 || (number == INT_MAX / 10 && extract > 7))
                return 0; // Positive overflow
    if (number < INT_MIN / 10 || (number == INT_MIN / 10 && extract < -8))
                return 0; // Negative overflow
    number = number * 10 + extract;
    x = x / 10;
    } while ( x!= 0);
    return number;
    }



    bool isPalindrome(int x) {
        if (x < 0 ) return false;
        int result = reverse(x);
        if (x == result) return true;
        else return false;
    }
};

/*
int main () {
    Solution s;
    int n; cin >> n;
    if ( pow(-2,31) < n && n < pow (2,31) - 1) {
    s.reverse (n); }
    else return 0;
    cout << s.isPalindrome(n);
}
*/
