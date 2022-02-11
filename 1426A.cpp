
#include <iostream>

using namespace std;

int
main ()
{
  int T;
  cin >> T;
  while (T--)
    {
      int n, x;
      int a = 1, b = 2;
      cin >> n >> x;
      int cnt = 0;
      while (n > 0)
	{
	  if (cnt == 0)
	    {
	      cnt++;
	      n -= 2;
	    }
	  else
	    {
	      cnt++;
	      n -= x;
	    }
	}
      cout << cnt << endl;
    }

  return 0;
}
