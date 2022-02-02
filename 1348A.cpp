#include <iostream>
using namespace std;
int arr[30];

int
minmax (int n, int size)
{
  int total = 0;
  if (n >= 4)
    {
      n = n / 2 - 1;
      for (int i = 0; i < n; i++)
	{
	  total += arr[i];
	}
      total += arr[size - 1];
    }
  else
    {
      return arr[1];
    }
  return total;
}

int
middle (int n, int size)
{
  int total = 0;
  if (n >= 4)
    {
      n = n / 2 - 1;
      for (int i = n; i < size - 1; i++)
	{
	  total += arr[i];
	}
//           cout << "total " << total << endl;
    }
  else
    {
      total = arr[0];
    }
  return total;
}

int
main ()
{
  int t;
  cin >> t;
  arr[0] = 2;
  for (int k = 1; k < 30; k++)
    {
      arr[k] = arr[k - 1] * 2;
    }
  for (int i = 0; i < t; i++)
    {
      int n;
      cin >> n;
      cout << minmax (n, n) - middle (n, n) << endl;
    }
}
