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
      int one = 0, two = 0;
      for (int i = 0; i < n; i++)
	{
	  int x;
	  cin >> x;
	  if (x == 1)
	    one++;
	  else
	    two++;
	}
      int a1 = 0, a2 = 0;
      if (two % 2 == 1)
	a1 += 2;
      if (a1 == 0)
	{
	  if (one % 2 == 0)
	    {
	      cout << "YES" << "\n";
	    }
	  else
	    {
	      cout << "NO" << "\n";
	    }
	}
      else
	{
	  if (one >= 2)
	    {
	      if ((one - 2) % 2 == 0)
		{
		  cout << "YES" << "\n";
		}
	      else
		{
		  cout << "NO" << "\n";
		}
	    }
	  else
	    {
	      cout << "NO" << "\n";
	    }
	}
    }

  return 0;
}
