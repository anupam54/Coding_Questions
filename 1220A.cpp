#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt0=0, cnt1=0;
    for(int i=0; i<n; i++){
        if(s[i]=='n')
            cnt1++;
        else if(s[i]=='z')
            cnt0++;
    }
    for(int i=0; i<cnt1; i++)
        cout<<1<<" ";
    for(int i=0; i<cnt0; i++)
        cout<<0<<" ";
    cout<<endl;
    return 0;
}
