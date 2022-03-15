#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int c = n/10;
        int a=c*10;
        int ans=0;
        if(n%7==0)
        {
            cout<<n<<endl;
            continue;
        }
        while(a>=c*10 && a<(c+1)*10){
            if(a%7==0){
                ans=a;
                break;
            }
            a++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
