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
      n *= 2;
      vector < int >v (n, 0);
      for (int i = 0; i < n; i++)
	cin >> v[i];
      vector < int >result;
    for (int i:v)
	{
	  if (count (result.begin (), result.end (), i) == 0)
	    result.push_back (i);
	}
    for (int i:result)
	cout << i << " ";
      cout << endl;
    }

  return 0;
}
