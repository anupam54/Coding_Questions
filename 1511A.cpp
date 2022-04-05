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
        int uv=0, dv=0;
        for(int i=0; i<n; i++){
            if(v[i]==1)
                uv++;
            else if(v[i]==2)
                dv++;
            else
                uv++;
        }
        cout<<uv<<endl;
    }
    return 0;
}
