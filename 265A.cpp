#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin>>s;
    cin>>t;
    int i=0, j=0;
    while(j<t.size()){
        if(s[i]==t[j])
            i++;
        j++;
    }
    cout<<i+1<<endl;
    return 0;
}
