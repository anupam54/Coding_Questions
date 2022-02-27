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
      int n;
      cin >> n;
      vector < int >v (n, 0);
      for (int i = 0; i < n; i++)
	cin >> v[i];
      int sum = 0;
    for (int i:v)
	sum += i;
      if (sum == n)
	cout << 0 << endl;
      else if (sum < n)
	cout << 1 << endl;
      else
	cout << abs (sum) - n << endl;
    }

  return 0;
}
