#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
            cout<<s[n-1];
        cout<<"\n";
    }
    return 0;
}
