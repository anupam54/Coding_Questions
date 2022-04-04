#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
 
while(t--)
{
  int n;
  cin>>n;
 
  vector<int>v(n,0);
 
  for(int i=0; i<n; i++)
  cin>>v[i];
 
  vector<int>odd;
 
  for(int i=0; i<n; i++)
  {
    if(v[i]%2==0)
    cout<<v[i]<<" ";
 
    else odd.push_back(v[i]);
  }
  for(auto k: odd)
  {
    cout<<k<<" ";
  }
  cout<<"\n";
}
return 0;
}