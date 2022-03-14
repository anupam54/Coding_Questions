#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
    int n;
    cin>>n;
    vector<int> v(n, 0);
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i:v)
        mp[i]++;
    int ans=-1;
    for(auto i:mp){
        if(i.second==1){
            for(int j=0; j<n; j++){
                if(i.first==v[j]){
                    ans=j+1;
                    break;
                }
            }
            if(ans!=-1)
                break;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
