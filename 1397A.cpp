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
      vector < string > v (n, "");
      for (int i = 0; i < n; i++)
	cin >> v[i];
      map < char, int >m;
      for (int i = 0; i < n; i++)
	{
	  for (int j = 0; j < v[i].size (); j++)
	    {
	      m[v[i][j]]++;
	    }
	}
      bool check = true;
    for (auto i:m)
	{
	  if (i.second % n != 0)
	    {
	      check = false;
	      break;
	    }
	}
      if (check == true)
	cout << "YES" << endl;
      else
	cout << "NO" << endl;
    }
  return 0;
}
