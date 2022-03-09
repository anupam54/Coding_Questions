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
        int ma=INT_MIN, mi=INT_MAX;
        for(int i=0; i<n; i++){
            cin>>v[i];
            ma=max(ma, v[i]);
            mi=min(mi, v[i]);
        }
        int l_min, l_max;
        for(int i=0; i<n; i++){
            if(v[i]==ma)
                l_max=i+1;
            if(v[i]==mi)
                l_min=i+1;
        }
        int r_min=n-l_min+1;
        int r_max=n-l_max+1;
        
        int a1=max(l_min, l_max);
        int a2=max(r_min, r_max);
        int a3=min(l_max+r_min, l_min+r_max);
        
        cout<<min(a1, min(a2, a3))<<endl;
    }
    return 0;
}
