#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int a, b;
        cin>>a>>b;
        int temp=abs(a-b);
        int ans=temp/10;
        if(ans*10<temp)
            cout<<ans+1<<endl;
        else
            cout<<ans<<endl;
    }

    return 0;
}
