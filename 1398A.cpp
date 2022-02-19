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
      int i;
      for (i = 0; i < n - 2; i++)
	{
	  if (v[i] + v[i + 1] <= v[n - 1])
	    {
	      break;
	    }
	}
      if (i == (n - 2))
	cout << -1 << endl;
      else
	cout << i + 1 << " " << i + 2 << " " << n << endl;
    }

  return 0;
}
