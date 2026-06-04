// frequency array (telling the frequency of input integers
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    map <int , int> mpp;
        for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    
    int p; cin >> p;
    while( p > 0) {
        int number; cin >> number;
        cout << mpp[number] << endl;
        p--;
    }
    return 0;
}




// frequency array (telling the frequency of input integers
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; int arr[n];
    map <int , int> mpp;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
         mpp[arr[i]]++;
    }
    
    
    for (auto it : mpp) {
        cout << it.first << "->" << it.second << "\n";
    }
    
    
    int p; cin >> p;
    while( p > 0) {
        int number; cin >> number;
        cout << mpp[number] << endl;
        p--;
    }
    return 0;
}
