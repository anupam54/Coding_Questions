#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    int temp=1;
    for(int i=0; i<n; ){
       ans+=s[i];
       i=i+temp;
       temp++;
    }
    cout<<ans;
    return 0;
}
