#include <iostream>

using namespace std;

int
main ()
{
  int T;
  cin >> T;
  while (T--)
    {
      int a, b, c;
      cin >> a >> b >> c;
      int total = (abs (a - b) * 2);
      if (a > total || b > total || c > total)
	cout << -1 << endl;
      else
	{
	  if (c + abs (a - b) <= total)
	    cout << c + abs (a - b) << endl;
	  else if (c - abs (a - b) <= total && c - abs (a - b) > 0)
	    cout << c - abs (a - b) << endl;
	  else
	    cout << -1 << endl;
	}
    }

  return 0;
}
