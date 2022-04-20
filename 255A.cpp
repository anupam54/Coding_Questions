#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int c=0, bi=0, ba=0;
    for(int i=0; i<n; i++){
        if(i%3==0)
            c+=v[i];
        else if(i%3==1)
            bi+=v[i];
        else
            ba+=v[i];
    }
    if(c>bi && c>ba)
        cout<<"chest"<<endl;
    else if(bi>c && bi>ba)
        cout<<"biceps"<<endl;
    else
        cout<<"back"<<endl;
    return 0;
}
