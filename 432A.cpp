#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  int n, k;
  cin >> n >> k;
  int cnt = 0;
  vector < int >data (n, 0);
  for (int i = 0; i < n; i++)
    {
      cin >> data[i];
      if (data[i] + k <= 5)
	cnt++;
    }
  cout << cnt / 3 << endl;
  return 0;
}
