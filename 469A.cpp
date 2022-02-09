#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  int p;
  cin >> p;
  set < int >s;
  vector < int >v1 (p, 0);
  for (int i = 0; i < p; i++)
    {
      cin >> v1[i];
      s.insert (v1[i]);
    }
  int q;
  cin >> q;
  vector < int >v2 (q, 0);
  for (int i = 0; i < q; i++)
    {
      cin >> v2[i];
      s.insert (v2[i]);
    }
  string ans = "I become the guy.";
  for (int i = 1; i <= n; i++)
    {
      if (s.find (i) == s.end ())
	{
	  ans = "Oh, my keyboard!";
	}
    }
  cout << ans << endl;
  return 0;
}
