#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        long long x, y, a, b;
        cin>>x>>y>>a>>b;
        long long temp=(y-x)/(a+b);
        if(temp*(a+b)==y-x)
            cout<<(y-x)/(a+b)<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
