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
      vector < int >a (n, 0);
      for (int i = 0; i < n; i++)
	cin >> a[i];

      int k = 0;
      for (int i = 0; i < n; i++)
	{
	  if (i % 2 == 0)
	    {
	      cout << a[k] << " ";
	      continue;
	    }
	  else
	    {
	      cout << a[n - 1 - k] << " ";
	      k++;
	    }
	}
      cout << "\n";
    }

  return 0;
}
