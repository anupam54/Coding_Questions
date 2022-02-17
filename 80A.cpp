#include<bits/stdc++.h>
using namespace std;

int
main () 
{
  
int n, m, i, j;
  
int flag = -1;
  
cin >> n >> m;
  
int arr[m + 1];
  
memset (arr, 0, sizeof (arr));
  
for (i = 2; i * i <= m; i++)
    
    {
      
if (arr[i] == 0)
	
	{
	  
for (j = i * i; j <= m; j += i)
	    
	    {
	      
arr[j] = 1;
	    
}
	
}
    
}
  
if (arr[m] == 0)
    
flag = 1;
  
for (i = n + 1; i < m; i++)
    
    {
      
if (arr[i] == 0)
	
flag = -1;
    
}
  
if (flag == -1)
    
cout << "NO";
  
  else
    
cout << "YES";
  
 
 
return 0;

}


