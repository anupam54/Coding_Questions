#include <iostream>

using namespace std;

int
main ()
{
  string s;
  cin >> s;
  string S = "a" + s;
  int n = S.size ();
  int res = 0;

  for (int i = 1; i < n; i++)
    {
      res += min (abs (S[i] - S[i - 1]), 26 - abs (S[i] - S[i - 1]));
    }
  cout << res << endl;
  return 0;
}
