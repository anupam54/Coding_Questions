#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        long long q=sqrt(n);
        set<long long> s;
        for(int i=1; i<=q; i++){
            long long m1=i*i;
            long long m2=m1*i;
            if(m1<=n)
                s.insert(m1);
            if(m2<=n)
                s.insert(m2);
        }
        cout<<s.size()<<endl;
    }

    return 0;
}
