#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int mp[26]={0};
        bool check=false;
        for(int i=0; i<n; i++){
            mp[str[i]-'A']++;
            if(mp[str[i]-'A']>1 && str[i]!=str[i-1])
            {
                check=true;
                break;
            }
    }
    if(check==false)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}