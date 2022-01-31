#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  int T;
  cin >> T;
  while (T--)
    {
      long long n;
      cin >> n;
      long long cnt = 0;

      for (long long i = 1; i <= 9; i++)
	{
	  long long copy = i;
	  while (copy <= n)
	    {
	      copy = copy * 10 + i;
	      cnt++;
	    }
	}
      cout << cnt << endl;
    }
  return 0;
}
