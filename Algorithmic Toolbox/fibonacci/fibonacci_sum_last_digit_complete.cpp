#include <iostream>
#include <cassert>
#include <ctime>
#include <cstdlib>
#include <vector>
int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }
    // std::cout << "sum_1 :" << sum << "\n";

    return sum % 10;
}

int fibonacci_sum_efficient(long long n) {
    long long * p_array;
    p_array = new long long[n];
    for (size_t i = 0; i <= n; i++)
    {
      if(i <= 1) p_array[i] = i;
      else
      {
        p_array [i] = p_array [i-1] + p_array[i-2];
      }
    }
    long long sum;
    for (size_t i = 0; i <= n; i++)
    {
        sum += p_array[i];
    }
    delete[] p_array;
    std::cout << "sum_2 :" << sum << "\n";

    return sum % 10;
}

int fibonacci_sum_efficient_vector(long long n)
{
    std::vector<long long> v(n+1);
    for(int i = 0 ; i <= n ;i++)
    {
  	if(i <= 1) v[i] = i;
    	else
  	{
  	   v[i] = v[i-1] + v[i-2];
  	}
      }

    long long sum = 0;
    for(int i = 0 ; i <= n ;i++)
    {
	     sum += v[i];
    }
    // std::cout << "aa" << aa << std::endl;
    // std::cout << "sum" << sum << std::endl;
    return sum % 10;


 }

void check()
{
  srand(time(NULL));
  //assert(fibonacci_sum_efficient(n) == fibonacci_sum_naive(n));
  while(true)
  {
    long long rand_num = rand() % 10;
    std::cout << "rand_num :" << rand_num << "\n";

    long long result_1 = fibonacci_sum_naive(rand_num);
    long long result_2 = fibonacci_sum_efficient_vector(rand_num);
    if(result_1 == result_2)
    {
      std::cout << "Correct" << "\n";
      continue;
    }
    else
    {
      std::cout << "WRONG" << "\n";
      break;
    }
  }

}
int main()
{

    long long n = 0;
    std::cin >> n;
    // std::cout << fibonacci_sum_naive(n);
    //std::cout << fibonacci_sum_efficient(n);
    std::cout << fibonacci_sum_efficient_vector(n);
    // check();
}
