#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int mini=*min_element(a.begin(),a.end());
        int total=0;
        for(int i=0;i<n;i++){
            if(a[i]!=mini) total++;
        }
        cout<<total<<"\n";
    }
    return 0;
}