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
      int n, d;
      cin >> n >> d;
      vector < int >v (n, 0);
      for (int i = 0; i < n; i++)
	cin >> v[i];
      sort (v.begin (), v.end ());
      bool check = true;
    for (int i:v)
	if (i > d)
	  check = false;
      if (check == false)
	{
	  for (int i = 0; i < n - 1; i++)
	    {
	      if (v[i] + v[i + 1] <= d)
		{
		  check = true;
		  break;
		}
	    }
	}
      if (check == true)
	cout << "YES" << endl;
      else
	cout << "NO" << endl;
    }

  return 0;
}
