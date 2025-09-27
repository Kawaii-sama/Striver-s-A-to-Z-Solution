//string palindrome // two for loop
#include <bits/stdc++.h>
using namespace std;


bool palindrome (string a , string b) {
    //cout << f.size(); cout or for loop can only be written inside a function
    for (int i = a.size() - 1; i >= 0; i--) {
        b += a[i]; }

    for (int j = 0; j < a.size(); j++) {
    if (tolower(a[j]) != tolower(b[j])) return false;
    }
    return true;
    
    
}

int main() {
    string a;
    getline (cin , a);
    string b;
    cout << palindrome(a, b);
    return 0;
}

// string palindrome, one for loop

#include <bits/stdc++.h>
using namespace std;


bool isPrime (string s) {
    for (int i = 0; i < s.size()-1; i++) {
        if ( tolower(s[i]) != tolower(s[s.size()-1-i]) ) return false;
    }
        return true; }

int main() {
    string s; getline (cin , s);
    cout << isPrime(s);
    return 0;
}




//string palindrome , while loop
#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {

        int left = 0, right = s.length()-1;
        while(left<right)
        {
            if(!isalnum(s[left])) 
                left++;
            else if(!isalnum(s[right])) 
                right--;
            else if(tolower(s[left])!=tolower(s[right])) 
                return false;
            else {
                left++; 
                right--;
            }
        }
        return true;

}
int main() {

  string str = "ABCDCBA";
  bool ans = isPalindrome(str);

  if (ans == true) {
    cout << "Palindrome";
  } else {
    cout << "Not Palindrome";
  }






    //string palindrome, recursion

#include<bits/stdc++.h>
using namespace std;


bool isPalindrome (int i, string s, int right) {
    if (i <= right) {
        if (!isalnum(s[i])) i++;
        else if ((!isalnum(s[right]))) right--;
        else if (tolower(s[i])!=tolower(s[right])) return false;
        else return isPalindrome (i+1,s,right-1);
        
    }
        
    return true;
}


int main() {
    string s; 
    getline(cin,s);
    cout << isPalindrome (0, s, s.length()-1);
  return 0;
}
  return 0;
}

