#include <bits/stdc++.h>
using namespace std;

int Count = 0;

int printS (vector<int> &ds, int idx, int len, int s, int sum, int arr[]) {
  if (idx == len) {
      // condition satisfied
    if (s == sum)
      Count++;
    return Count;
    }
  
  ds.push_back(arr[idx]);
  s += arr[idx];
  printS(ds, idx+1, len, s, sum, arr);
  ds.pop_back();
  s -= arr[idx];
  printS (ds, idx+1, len, s, sum, arr);
  return Count;
}


int main() {
vector<int> ds;
int sum; sum = 2;
int arr[] = {1,3,2,1};
cout << printS(ds, 0, 4, 0, sum, arr);
  return 0;
}
/*
1. isme count declared ambiguous dikha raha hai. kyunki wo global variable wala tha.
2. control reaches end of non-void functions. illegal instructions. default return statement nahi lagai thi. jabh ki void wale me aisa nahi tha
*/
