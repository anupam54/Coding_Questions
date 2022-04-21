#include <bits/stdc++.h>
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
        for(int i=0; i<n; i++)
            cin>>v[i];
        string s="No";
        for(auto i:v){
            int x=sqrt(i);
            if(x*x==i)
                continue;
            else{
                s="Yes";
                break;
            }
        }
    cout<<s<<endl;
    }

    return 0;
}
