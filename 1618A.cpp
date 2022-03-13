#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        vector<int> v(7, 0);
        for(int i=0; i<7; i++)
            cin>>v[i];
        
        
        int a=v[0];
        int b=v[1];
        int c;
        if(v[0]+v[1]==v[2])
            c=v[3];
        else
            c=v[2];
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }

    return 0;
}
