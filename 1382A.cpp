#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int m, n;
        cin>>m>>n;
        vector<int> v1(m, 0);
        vector<int> v2(n, 0);
        for(int i=0; i<m; i++)
            cin>>v1[i];
        for(int i=0; i<n; i++)
            cin>>v2[i];
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        int ans=-1;
        for(int i=0; i<m; i++){
            if(find(v2.begin(), v2.end(), v1[i])==v2.end())
                continue;
            else{
                ans=v1[i];
                break;
            }
        }
    if(ans==-1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<1<<" "<<ans<<endl;
    }
    }
    return 0;
}
