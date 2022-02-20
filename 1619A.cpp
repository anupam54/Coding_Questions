#include <iostream>

using namespace std;

int
main ()
{
  int T;
  cin >> T;
  while (T--)
    {
      string s;
      cin >> s;
      bool check = true;
      int n = s.size ();
      if (n % 2 != 0)
	cout << "NO" << endl;
      else
	{
	  for (int i = 0; i < n / 2; i++)
	    {
	      if (s[i] != s[(n / 2) + i])
		{
		  check = false;
		  break;
		}
	    }
	  if (check == true)
	    cout << "YES" << endl;
	  else
	    cout << "NO" << endl;
	}
    }
  return 0;
}
