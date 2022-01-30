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
      int mx = *max_element (v.begin (), v.end ());
      int mn = *min_element (v.begin (), v.end ());
      cout << mx - mn << endl;
    }

  return 0;
}
