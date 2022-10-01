#include <iostream>
using namespace std;

int composite(int a, int d[], int cap) {
  int b;
  int c = 0;
  while (a > 0) {
    b = a % 10;
    for (int i = 0; i < cap; i++) {
      if (d[i] == b) {
        c = c + b;
      }
    }
    a = a / 10;
  }
  return c;
}

int prime(int e) {
  int f = 0;
  for (int h = 3; h <= e; h++) {
    int p = h - 1;
    while (h % p != 0 && p != 1) {
      p = p - 1;
      if (p == 1) {
        f = f + h;
      }
    }
  }
  return f + 2;
}

void fibonacci(int q, int r) {
  int fib = 0;
  int base = 0;
  int start = 1;
  if (q == 0) {
    cout << base << " " << start << " ";
  }
  while (fib <= r) {
    fib = start + base;
    base = start;
    start = fib;
    if (fib >= q && fib <= r) {
      cout << fib << " ";
    }
  }
}

int main() {

  int x;
  int d[4] = {4, 6, 8, 9};

  // user input
  cout << "Enter a number between 200 and 800 (inclusive): ";
  cin >> x;

  // validating the input
  while (x < 200 || x > 800) {
    cout << "Invalid input! Enter a number between 200 and 800 (inclusive): ";
    cin >> x;
  }

  // function to receive sum of the composite digits from input
  cout << "Sum of the composite digits of " << x << " is " << composite(x, d, 4)
       << endl;

  // function to receive sum of prime integers from 1 to user input
  cout << "Sum of the prime integers from 1 to " << x << " is " << prime(x)
       << endl;

  // get integers from the two previous functions
  int q = composite(x, d, 4);
  int r = prime(x);

  // print fibonacci numbers from q to r
  cout << "Fibonacci numbers in the range " << q << " to " << r
       << " are: " << endl;
  fibonacci(q, r);

  return 0;
}