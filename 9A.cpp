#include <iostream>

using namespace std;
int
gcd (int a, int b)
{
  return b == 0 ? a : gcd (b, a % b);
}

int
main ()
{
  int a, b;
  cin >> a >> b;
  int mx = a > b ? a : b;
  mx--;
  cout << (6 - mx) / gcd (6 - mx, 6) << "/" << 6 / gcd (6 - mx, 6);
  return 0;
}
