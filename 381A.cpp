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
  int sr = 0;
  int dm = 0;
  int flag = true;
  int i = 0, j = n - 1;
  while (i <= j)
    {
      if (v[i] > v[j])
	{
	  if (flag == true)
	    {
	      sr += v[i];
	      i++;
	      flag = false;
	    }
	  else
	    {
	      dm += v[i];
	      i++;
	      flag = true;
	    }
	}
      else
	{
	  if (flag == true)
	    {
	      sr += v[j];
	      j--;
	      flag = false;
	    }
	  else
	    {
	      dm += v[j];
	      j--;
	      flag = true;
	    }
	}
    }
  cout << sr << " " << dm;
  return 0;
}
