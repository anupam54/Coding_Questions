#include <iostream>

using namespace std;

int
main ()
{
  string s;
  cin >> s;
  string ans = "";
  while (s.length () >= 1)
    {
      if (s[0] == '.')
	{
	  ans += '0';
	  s.erase (0, 1);
	}
      else if (s[0] == '-' && s[1] == '.')
	{
	  ans += '1';
	  s.erase (0, 2);
	}
      else if (s[0] == '-' && s[1] == '-')
	{
	  ans += '2';
	  s.erase (0, 2);
	}
    }
  cout << ans;
  return 0;
}
