#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  string s;
  cin >> s;
  vector < string > t (5, "");
  for (int i = 0; i < 5; i++)
    cin >> t[i];
  string ans = "NO";
  for (int i = 0; i < 5; i++)
    {
      if (s[0] == t[i][0] || s[1] == t[i][1])
	{
	  ans = "YES";
	  break;
	}
    }
  cout << ans << endl;
  return 0;
}
