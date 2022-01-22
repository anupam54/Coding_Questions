#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;

  vector < int >v (n, 0);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int small = v[0];
  int large = v[0];
  int count = 0;
  for (int i = 1; i < n; i++)
    {
      if (v[i] > large)
	{
	  count++;
	  large = v[i];
	}
      else if (v[i] < small)
	{
	  count++;
	  small = v[i];
	}
    }
  cout << count << endl;
  return 0;
}
