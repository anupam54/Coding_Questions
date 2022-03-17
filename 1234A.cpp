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
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum+=v[i];
        }
        if((sum/n)*n<sum)
            cout<<(sum/n)+1<<endl;
        else
            cout<<(sum/n)<<endl;
    }
    return 0;
}
