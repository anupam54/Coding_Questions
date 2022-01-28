/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
      int i = 1;
      int cnt = 0;
      while (true)
	{
	  int temp = i;
	  bool check = false;
	  for (int j = 1; j <= 4; j++)
	    {
	      cnt += j;
	      if (temp == n)
		{
		  check = true;
		  break;
		}
	      temp = temp * 10 + i;
	    }
	  if (check == true)
	    break;
	  else
	    i++;
	}
      cout << cnt << endl;
    }
  return 0;
}
