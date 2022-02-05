#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  int n, m;
  cin >> n >> m;
  vector < vector < char >>v;
  for (int i = 0; i < n; i++)
    {
      vector < char >c (m, ' ');
      for (int j = 0; j < m; j++)
	{
	  cin >> c[j];
	}
      v.push_back (c);
    }
  bool check = true;
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
	{
	  if (v[i][j] == 'C' || v[i][j] == 'M' || v[i][j] == 'Y')
	    {
	      check = false;
	      break;
	    }
	}
    }
  if (check == true)
    cout << "#Black&White" << endl;
  else
    cout << "#Color" << endl;
  return 0;
}
