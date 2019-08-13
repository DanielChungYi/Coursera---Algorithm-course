#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long lcm_efficient(int a, int b)
{
  long long gcd = -1;
  long long  a_ = a;
  long long  b_ = b;
  while(b != 0)
  {
    gcd = a % b;
    a = b;
    b = gcd;
  }

  return (long long) a_ * b_ /a;
}
int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_efficient(a, b) << std::endl;
  return 0;
}
