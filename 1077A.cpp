#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
    long long a, b, k;
    cin>>a>>b>>k;
    long long ans=0;
    if(k%2==0){
        ans+=a*(k/2);
        ans-=b*(k/2);
    }
    else{
        ans+=a*(k/2+1);
        ans-=b*(k/2);
    }
    cout<<ans<<endl;
    }
    return 0;
}
