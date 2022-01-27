#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  int T;
  cin >> T;
  vector < string > v (T, "");
  for (int i = 0; i < T; i++)
    cin >> v[i];
  int total = 0;
  for (int i = 0; i < T; i++)
    {
      if (v[i] == "Tetrahedron")
	total += 4;
      else if (v[i] == "Cube")
	total += 6;
      else if (v[i] == "Octahedron")
	total += 8;
      else if (v[i] == "Dodecahedron")
	total += 12;
      else
	total += 20;
    }
  cout << total;
  return 0;
}
