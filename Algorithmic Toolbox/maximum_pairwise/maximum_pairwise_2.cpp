#include<iostream>
#include<vector>
#include<algorithm>
/*
本來想使用sort完後的vector直接取後面兩個相乘

但要使用sort必須先知道記憶體位置

失敗
*/
using namespace std;

int max_fun(const vector<int> input)
{
   int n = input.size();
   sort(input.begin(),input.end());
   return (input[n]*input[n-1]);
}

int main()
{
   int n;
   cin >> n;
   vector<int> input(n);
   for(int i = 0; i < n; i++)
{
   cin >> input[i];	
}
    int ans = max_fun(input);
    cout << ans << "\n";
return 0;
	
}
