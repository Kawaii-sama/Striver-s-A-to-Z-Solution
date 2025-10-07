// reverse of an array using recursion space optimized
#include <bits/stdc++.h>
using namespace std;


void reversal (int arr[], int N, int i) {
    if ( i == N ) return;
    reversal (arr, N, i+1);
    cout << arr[i];
}


int main() {
    int N; cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    reversal (arr,N,0);

    return 0;
}




// reverse of an array using recursion without space optimization
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

void reverseArray(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray(arr, start + 1, end - 1);
   }
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1 };
   reverseArray(arr, 0, n - 1);
   printArray(arr, n);
   return 0;
}



// using library function
#include <iostream>
#include <algorithm>

using namespace std;


void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}


void reverseArray(int arr[], int n) {
   reverse(arr, arr + n); // function included in algorith library
}


int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1 };
   reverseArray(arr, n);
   printArray(arr, n);
   return 0;
}


//using auxiliary array

#include <iostream>
using namespace std;

void printArray(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}

void reverseArray(int arr[], int n) {
   int ans[n];
   for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
   }
   printArray(ans, n);
}
int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(arr, n);
   return 0;
}

// two pointer

#include <iostream>
using namespace std;


void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
//Function to reverse array 
void reverseArray(int arr[], int n) {
   int p1 = 0, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
   printArray(arr, n);
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1};
   reverseArray(arr, n);
   return 0;
}
