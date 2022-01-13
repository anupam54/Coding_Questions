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
        for(int i=0; i<n; i++)
            cin>>v[i];
        int count=0;
        int index=0;
        int element=0;
        for(int i=0; i<n; i++){
            if((i%2==0 && v[i]%2!=0)){
                    count++;
                    element++;
                }
            else if (i%2!=0 && v[i]%2==0){
                    count++;
                    index++;
            }
        }
    if(count%2==0 && index==element)
        cout<<count/2<<endl;
    else 
        cout<<-1<<endl;
    }

    return 0;
}
