#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        vector<int> data(3);
        int n;
        for (int i=0; i<3; i++)
            cin>>data[i];
        cin>>n;
        sort(data.begin(), data.end());
    
        int temp=(data[2]-data[1]) + (data[2]-data[0]);
        if((n-temp)%3==0 && (n-temp)>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
