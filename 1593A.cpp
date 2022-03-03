#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        vector<int> v(3, 0);
        for(int i=0; i<3; i++)
            cin>>v[i];
        
        int maxi=*max_element(v.begin(), v.end());
        if(maxi==v[0] && maxi==v[1] || maxi==v[1] && maxi==v[2] || maxi==v[0] && maxi==v[2])
            cout<<maxi+1-v[0]<<" "<<maxi+1-v[1]<<" "<<maxi+1-v[2]<<endl;
        else{
            if(v[0]==maxi)
                cout<<0<<" "<<maxi+1-v[1]<<" "<<maxi+1-v[2]<<endl;
            else if(v[1]==maxi)
                cout<<maxi+1-v[0]<<" "<<0<<" "<<maxi+1-v[2]<<endl;
            else if(v[2]==maxi)
                cout<<maxi+1-v[0]<<" "<<maxi+1-v[1]<<" "<<0<<endl;
        }
    }
    return 0;
}
