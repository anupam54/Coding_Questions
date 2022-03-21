#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    long long n, x;
    cin>>n>>x;
    vector<pair<char, long long>> v(n);
    for(int i=0; i<n; i++){
        char c;
        long long a;
        cin>>c>>a;
        v[i] = make_pair(c, a);
    }
    long long dis=0;
    for(int i=0; i<n; i++){
        if(v[i].first=='-'){
            if(x>=v[i].second)
                x-=v[i].second;
            else
                dis++;
        }
        else{
            x+=v[i].second;
        }
    }
    cout<<x<<" "<<dis<<endl;
    return 0;
}
