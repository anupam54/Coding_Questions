#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  vector < vector < char >>v;
  for (int i = 0; i < n; i++)
    {
      vector < char >v1 (5, '0');
      for (int j = 0; j < 5; j++)
	{
	  cin >> v1[j];
	}
      v.push_back (v1);
    }
  int x = -1, y = -1;
  for (int i = 0; i < n; i++)
    {
      if (v[i][0] == 'O' && v[i][1] == 'O')
	{
	  x = i;
	  y = 0;
	  break;
	}
      else if (v[i][3] == 'O' && v[i][4] == 'O')
	{
	  x = i;
	  y = 3;
	  break;
	}
    }
  if (x == -1 && y == -1)
    cout << "NO" << endl;
  else
    {
      v[x][y] = '+';
      v[x][y + 1] = '+';
      cout << "YES" << endl;
    for (auto i:v)
	{
	for (auto j:i)
	    {
	      cout << j;
	    }
	  cout << endl;
	}
    }
  return 0;
}
