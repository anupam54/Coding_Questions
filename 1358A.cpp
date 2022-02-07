#include <iostream>

using namespace std;

int
main ()
{
  int T;
  cin >> T;
  while (T--)
    {
      int n, m;
      cin >> n >> m;
      int ans = 0;
      if (m % 2 == 0)
	{
	  ans += (m / 2);
	  ans *= n;
	}
      else
	{
	  ans += (m - 1) / 2 * n;
	  ans = ans + (n + 1) / 2;
	}
      cout << ans << endl;
    }

  return 0;
}
