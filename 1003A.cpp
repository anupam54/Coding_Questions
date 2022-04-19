#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0; i<n; i++)
        cin>>v[i];
    map<int, int> mp;
    for(auto i:v)
        mp[i]++;
    int mx=-1;
    for(auto i:mp){
        if(i.second>mx)
            mx=i.first;
    }
    cout<<mx<<endl;
    return 0;
}
