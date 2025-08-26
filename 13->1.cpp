//brute force
#include <bits/stdc++.h>
using namespace std;    

int* arr; int* result; int* result2; int Count1, Count2;

int* factorArray (int inp, int &count) {
    count = 0;
    int i = 1;
    int index = 0;
    while ( i <= inp ) {
    if ( inp % i == 0) {
    count++; }
    i++;}
    
    int j = 0;
    arr = new int[count];
    for (int i = 1; i <= inp; i++) {
    if (inp % i == 0) {
        arr[j] = i; j++; }
     }
     return arr;
    }


int GCD () {
    int save = 1; int j = 0; int i = 0;
        while ( i < Count1 || j < Count2)  {
            if (result[i] == result2[j]) { save = result[i]; i++; j++; }
            else if (result[i] < result2[j]) i++;
            else j++; }
    return save;
        }
//150,75 leetcode.



int main() {
    int a; cin >> a; result = factorArray(a,Count1);
    int b; cin >> b;  result2 = factorArray(b,Count2);
    cout << GCD();
    return 0;
}


//better
// in this time complexity depends upon the iterations but for worst cases i.e. whose gcd is 1 . its really worse. also running for n times
#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int n1, int n2) {
    for(int i = min(n1, n2); i > 0; i--) {
        if(n1 % i == 0 && n2 % i == 0) {
            return i;
        }
    }
    
    return 1;
}


int main() {
    int n1 = 20, n2 = 15;

    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}


//optimized
// this guy is not running for n times
#include<bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    if (a == 0) return b;
    return a;
}


int main() {
    int a; cin >> a;
    int b; cin >> b;
    cout << gcd (a,b);
    return 0;
}
