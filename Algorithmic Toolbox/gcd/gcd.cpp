#include <iostream>

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int gcd_efficient(int a, int b)
{
  int r;
  while(b != 0)
  {
     r = a % b;
     a = b;
     b = r;
  }
  return a;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  // std::cout << gcd_naive(a, b) << std::endl;
  std::cout << gcd_efficient(a, b) << std::endl;
  return 0;
}
