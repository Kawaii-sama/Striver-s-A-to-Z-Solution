/*
#include <bits/stdc++.h>
using namespace std;

int main () {
    string str;
    getline(cin,str);
    cout << str;
    return 0;
}


int = -10^9 to 10^9;
long = -10^12 to 10^12;
long long = -10^18 to 10^18;
*/

//WAP that takes an input of age
//and prints if you are adult or not


/*
#include <bits/stdc++.h>
using namespace std;

bool adultDeterminer (int n) {
    while ( n > 0 ) {
    if ( n < 18 ) 
    { return false; }
    else 
    { return true; }
    }
    return false; // when n <= 0 i.e. when condition of while loop is false
}

int main() {
    int age; cin >> age;
    if (adultDeterminer(age) == 0)
    cout << "notAdult";
    else
    cout << "Adult";
    
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

string employeeAge (int n) {
    if ( n < 18)
    return "Not eligible";
    else if (n >= 55 && n<= 57)
    return "eligible for job, but retirement soon.";
    else if (n > 57)
    return "Retirement time";
    return "Eligible";
}

int main() {
    int age; cin >> age;
    cout << employeeAge(age);
    return 0;
}

