#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> mat;
    for(int i=0; i<n; i++){
        vector<int> temp(n, 1);
        mat.push_back(temp);
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            mat[i][j]=mat[i-1][j]+mat[i][j-1];
        }
    }
    cout<<mat[n-1][n-1];
    return 0;
}
