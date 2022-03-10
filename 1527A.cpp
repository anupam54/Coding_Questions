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
        int ans;
        for(int i=31;i>=0;i--){
            if(n&(1<<i)){
                ans = ((1<<i)-1);
                break;
            }
        }
        cout<<ans<<endl;
    }
}
