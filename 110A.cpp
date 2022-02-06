#include <bits/stdc++.h>
#include <iostream>


using namespace std;


int
main ()
{
  long long n;
  cin >> n;
  vector < int >v (2, 0);
  int count = 0;
  while (n != 0)
    {
      if (n % 10 == 4)
	v[0]++;
      else if (n % 10 == 7)
	v[1]++;
      count++;
      n = n / 10;
    }
  if (((v[0] + v[1]) == 4) || ((v[0] + v[1]) == 7))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
