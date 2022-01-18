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
      int N;
      cin >> N;
      vector < int >a (N, 0);
      vector < int >b (N, 0);
      for (int i = 0; i < N; i++)
	cin >> a[i];
      for (int i = 0; i < N; i++)
	cin >> b[i];
      int min_a = *min_element (a.begin (), a.end ());
      int min_b = *min_element (b.begin (), b.end ());
      long long moves = 0;
      for (int i = 0; i < N; i++)
	{
	  moves += max (a[i] - min_a, b[i] - min_b);
	}
      cout << moves << endl;
    }
  return 0;
}
