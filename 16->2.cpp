// fibonacci series
#include <bits/stdc++.h>
using namespace std;

int Begin = 0;
int Last = 1;

int Sum;

void fibo (int n) {
    cout << Begin << " "; cout << Last <<" ";
    int cnt = 2;
    while (cnt < n) {
        Sum = Begin + Last;
        cout << Sum << " ";
        Begin = Last; Last = Sum;
        cnt++;
    }
    }

int main() {
    int n; cin >> n;
    fibo (n);
    return 0;
}

/*
ek toh last wala change hoga , ek sum change hoga, begin same rahega;
0 1 1 2 3 5


begin = 0; last = 1; sum = begin + last;
begin = last; last = sum; sum = begin + last;
*/




// using array
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n = 5;
  if (n == 0) {
    cout << 0;
  } else if (n == 1) {
    cout << 0 << " " << 1 << "\n";
  } else {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
      fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
    for (int i = 0; i <= n; i++) {
      cout << fib[i] << " ";
    }
  }
}


// fibo using recusrion
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N) {
   if(N <= 1) return N;
   int last = fibonacci(N-1);
   int slast = fibonacci(N-2);
   return last + slast;
   

}

int main(){
  
  // Here, let’s take the value of N to be 4.
  int N; cin >> N;
  //fibonacci(N);
  for (int i = 0; i < N; i++) {
      cout << fibonacci(i) << " ";
  }
  return 0;
  
  
  // 4 , 3 , 2 -> 0 , 1 -> return

}