#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int temp = *max_element(v.begin(), v.end());
    int ans=0;
    for (int i:v)
        ans+=temp-i;
    cout<<ans;
    return 0;
}
