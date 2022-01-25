#include <bits/stdc++.h>
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
      vector < int >data (n, 0);
      for (int i = 0; i < n; i++)
	cin >> data[i];
      int index;
      for (int i = 0; i < n; i++)
	{
	  if (count (data.begin (), data.end (), data[i]) == 1)
	    {
	      index = i + 1;
	      break;
	    }
	}
      cout << index << endl;
    }
  return 0;
}
