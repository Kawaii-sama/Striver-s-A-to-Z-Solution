// sub sequence , given sum, only print 1.
#include <bits/stdc++.h>
using namespace std;

bool printS (vector<int> &ds, int idx, int len, int s, int sum, int arr[]) {
  if (idx == len) {
      // condition satisfied
    if (s == sum) {
      for (auto it : ds) cout << it << " ";
      cout << "\n";
      return true;
    }
    return false; }
  
  ds.push_back(arr[idx]);
  s += arr[idx];
  if (printS(ds, idx+1, len, s, sum, arr) == true) return true;
  ds.pop_back();
  s -= arr[idx];
  if (printS(ds, idx+1, len, s, sum, arr) == true) return true;
  
  return false;
  
}


int main() {
vector<int> ds;
int sum; sum = 2;
int arr[] = {1,3,2,1};
printS(ds, 0, 4, 0, sum, arr);
  return 0;
}
/*
maine do variable banaye aur galat wale ko edit kar rahi thi
*/
