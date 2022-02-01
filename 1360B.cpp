#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  int T;
  cin >> T;
  while (T--)
    {
      int n;
      cin >> n;
      vector < int >v (n, 0);
      for (int i = 0; i < n; i++)
	cin >> v[i];
      sort (v.begin (), v.end ());
      int ans = INT_MAX;
      for (int i = 0; i < n - 1; i++)
	{
	  ans = min (ans, abs (v[i] - v[i + 1]));
	}
      cout << ans << endl;
    }
  return 0;
}
