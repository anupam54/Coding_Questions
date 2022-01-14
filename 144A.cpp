#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int mn=n-1;
    for(int i=n-1; i>=0; i--){
        if(v[mn]>v[i])
            mn=i;
    }
    int mx=0;
    for(int i=0; i<n; i++){
        if(v[mx]<v[i])
            mx=i;
    }
    if(mx>mn)
        cout<<(mx-1)+(n-mn)-1;
    else
        cout<<(mx-1)+(n-mn);
    return 0;
}
