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
        if(n==2 && (s=="01" || s=="10")){
            cout<<"YES"<<"\n";
        }
        else if(n==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }   
    }
    return 0;
}
