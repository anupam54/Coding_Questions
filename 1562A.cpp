#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int l, r;
        cin>>l>>r;
        int a, b;
        int ans;
    
        if(r%2==0)
            a=(r/2+1);
        else
            a=(r+1)/2;
        ans=r%a;
        if(a<l)
            ans=ans-(l-a);
        cout<<ans<<endl;
            
    }
    return 0;
}
