#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  set < int >v;
  int ans = 0;
  int a = 0, b = 0, c = 0, D = 0;
  while (true)
    {
      if (a + k <= d)
	{
	  a += k;
	  v.insert (a);
	}
      if (b + l <= d)
	{
	  b += l;
	  v.insert (b);
	}
      if (c + m <= d)
	{
	  c += m;
	  v.insert (c);
	}
      if (D + n <= d)
	{
	  D += n;
	  v.insert (D);
	}
      if (a + k > d && b + l > d && c + m > d && D + n > d)
	break;
    }
  cout << v.size ();

  return 0;
}
