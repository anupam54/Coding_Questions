#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        map<char, int> mp;
        int n=s.size();
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int ans=0;
        int temp=0;
        for(auto i:mp){
            if(temp==2){
                ans++;
                temp=0;
            }
            if(i.second==1)
                temp++;
            else if(i.second>=2)
                ans++;
        }
        if(temp==2)
            ans++;
    cout<<ans<<endl;
    }
    return 0;
}
