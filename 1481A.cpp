#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int x, y;
        cin>>x>>y;
        string s;
        cin>>s;
        map<char, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        if(x>=0 && y>=0){
            if(mp['R']>=abs(x) && mp['U']>=abs(y))
                cout<<"YES"<<endl;
            else
                cout<<"No"<<endl;
        }
        else if(x<0 && y>=0){
            if(mp['L']>=abs(x) && mp['U']>=abs(y))
                cout<<"YES"<<endl;
            else
                cout<<"No"<<endl;
        }
        else if(x>=0 && y<0){
            if(mp['R']>=abs(x) && mp['D']>=abs(y))
                cout<<"YES"<<endl;
            else
                cout<<"No"<<endl;
        }
        else if(x<0 && y<0){
            if(mp['L']>=abs(x) && mp['D']>=abs(y))
                cout<<"YES"<<endl;
            else
                cout<<"No"<<endl;
        }
        
    }

    return 0;
}
