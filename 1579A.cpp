#include<bits/stdc++.h>
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
      int a = count (s.begin (), s.end (), 'A');
      int b = count (s.begin (), s.end (), 'B');
      int c = count (s.begin (), s.end (), 'C');
      if (a + c == b)
	cout << "YES" << endl;
      else
	cout << "NO" << endl;
    }
  return 0;
}
