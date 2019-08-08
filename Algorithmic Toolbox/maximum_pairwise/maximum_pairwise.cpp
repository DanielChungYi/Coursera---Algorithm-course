#include<vector>
#include<iostream>
using namespace std;

long maximum_pairwise(vector<long> input)
{
   long n = input.size();
   long max_1 = -1;
   vector<long>::iterator it;
   vector<long>::iterator max_it;
    for(it = input.begin(); it!=input.end() ; ++it)
	{
	   if(*it > max_1) 
		{
		    max_1 = *it;
		    max_it = it;
		}
	}
    long max_num = * max_it;
    // cout << * max_it << "\n";
    input.erase(max_it);
   
    long max_2 = -1;
    vector<long>::iterator max_it_2;
    for(it = input.begin(); it!=input.end() ; ++it)
	{
	   if(*it > max_2) 
		{
		    max_2 = *it;
		    max_it_2 = it;
		}
	}
    long max_num_2 = * max_it_2;

    // cout <<  max_num << "\n";
    // cout <<  max_num_2 << "\n";

     cout << max_num  * max_num_2 << "\n";
     return (max_num * max_num_2);
}

int  main()
{
   long n;
   cin >> n;
   vector<long> input(n);
   for(long i = 0; i< n; i++)
{
    cin >> input[i];
}
   maximum_pairwise(input);
   return 0;
}
