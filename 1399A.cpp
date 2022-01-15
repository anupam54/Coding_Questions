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
        for(int i=0; i<n; i++)
        cin>>v[i];
        sort(v.begin(), v.end());
        bool check=true;
        for(int i=1; i<n; i++){
            if(v[i]-v[i-1]>1)
            {
                check=false;
                break;
            }
        }
        if(check==false)
            cout<<"No"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
