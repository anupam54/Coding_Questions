#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int
main ()
{
  string s;
  //getline() function  is used to read an entire line of input as a string.
  getline (cin, s);
  set < char >st;
for (auto i:s)
    {
      if (i >= 'a' && i <= 'z')
	st.insert (i);
    }
  cout << st.size ();
  return 0;
}
