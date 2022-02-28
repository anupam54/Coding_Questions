#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  string temp = "";
  int size = 0;
  for (int i = 0; i < n; i++)
    {
      if (s[i] == 'x')
	{
	  temp += s[i];
	}
      else
	{
	  if (temp.size () > 3)
	    size += (temp.size () - 2);
	  else if (temp.size () == 3)
	    size += 1;
	  temp = "";
	}
    }
  if (temp.size () > 3)
    size += (temp.size () - 2);
  else if (temp.size () == 3)
    size += 1;
  temp = "";
  cout << size << endl;
  return 0;
}
