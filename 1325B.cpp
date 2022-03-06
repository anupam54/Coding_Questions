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
      set < int >s;
    for (int i:v)
	s.insert (i);
      cout << s.size () << endl;
    }
  return 0;
}
