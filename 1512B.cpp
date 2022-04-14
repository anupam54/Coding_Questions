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
        vector<vector<char>> v(n, vector<char> (n, 'a'));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>v[i][j];
            }
        }
        vector<pair<int, int>> p;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(v[i][j]=='*')
                    p.push_back({i, j});
            }
        }
        int  l1=p[0].first, l2=p[1].first, r1=p[0].second, r2=p[1].second;
        if (l1==l2)
        {
            if (l1+1< n)
                v[l1+1][r1]='*', v[l2+1][r2]='*';
            else
                v[l1-1][r1]='*', v[l2-1][r2]='*';
        }
        else if (r1==r2)
        {
            if (r1+1<n)
                v[l1][r1+1]='*', v[l2][r2+1]='*';
            else
                v[l1][r1-1]='*', v[l2][r2-1]='*';
        }
        else{
            v[l1][r2] = '*', v[l2][r1] = '*';
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<v[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
