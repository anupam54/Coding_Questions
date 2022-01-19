#include <iostream>

using namespace std;

int
main ()
{
  int T;
  cin >> T;
  while (T--)
    {
      int n;
      cin >> n;
      int m = n / 2;
      if (m % 2 != 0)
	cout << "NO" << endl;
      else
	{
	  cout << "YES" << endl;
	  int i = 2;
	  for (; i <= n; i = i + 2)
	    cout << i << " ";
	  for (int j = 1; j < n - 2; j = j + 2)
	    cout << j << " ";
	  cout << i + (n / 2 - 1) - 2 << endl;
	}
    }

  return 0;
}
