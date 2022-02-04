#include <iostream>

 using namespace std;

 
int
main () 
{
  
int T;
  
cin >> T;
  
while (T--)
    {
      
int a, b;
      
cin >> a >> b;
      
int min_v = min (a, b);
      
int max_v = max (a, b);
      
int ans = max (min_v * 2, max_v);
      
cout << ans * ans << endl;
    
} 
return 0;

}
