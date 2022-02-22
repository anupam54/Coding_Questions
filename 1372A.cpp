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
      int temp = rand () % 1000 + 1;
      int i = 0;
      while (i < n)
	{
	  v[i] = temp;
	  i++;
	}
    for (int i:v)
	cout << i << " ";
      cout << endl;
    }
  return 0;
}
