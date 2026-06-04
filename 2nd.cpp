#include <bits/stdc++.h>
using namespace std;


string employeeAge (int n) {
    if ( n < 18)
    return "Not eligible";
    else if (n < 55)
    return "Eligible";
    else if (n < 58)
    return "eligible for job, but retirement soon.";
    return "Retirement time";
    
}

int main() {
    int age; cin >> age;
    cout << employeeAge(age);
    return 0;
}
