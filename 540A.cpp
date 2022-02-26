#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  int steps = 0;
  for (int i = 0; i < n; i++)
    {
      steps +=
	min (abs ((s[i] - 48) - (t[i] - 48)),
	     10 - abs ((s[i] - 48) - (t[i] - 48)));
    }
  cout << steps << endl;
  return 0;
}
