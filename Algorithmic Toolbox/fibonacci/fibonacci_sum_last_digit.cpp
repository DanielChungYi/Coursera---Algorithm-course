#include <iostream>
#include <cassert>
#include <ctime>
#include <cstdlib>
#include <vector>

// int fibonacci_sum_efficient_vector(long long n)
// {
//     std::vector<long long> v(n);
//     for(int i =0 ; i<=n ;i++)
//     {
//   	if(i <= 1) v[i] = i;
//     	else
//   	{
//   	   v[i] = v[i-1] + v[i-2];
//   	}
//       }
//
//     long long sum;
//     for(int i =0 ; i<=n ;i++)
//     {
// 	     sum += v[i];
//     }
//     return sum % 10;
//
//  }

int main()
{

    long long n = 0;
    std::cin >> n;
    std::vector<long long> v(n);

        for(int i =0 ; i < n ;i++)
        {
      	  if(i <= 1) v[i] = i;
        	else
          	{
          	    v[i] = v[i-1] + v[i-2];
          	}
          }
          long long aa = v[n-1] + v[n-2];
          // std::cout << aa;

        long long sum;
        for(int i =0 ; i<=n ;i++)
        {
    	     sum += v[i];
        }

         std::cout << (sum+aa) % 10;

    // std::cout << fibonacci_sum_efficient_vector(n);
}
