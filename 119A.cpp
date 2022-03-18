#include <iostream>
using namespace std;

int gcd(int x, int y){
    int i=x;
    while(i>1){
        if(x%i==0 && y%i==0)
            return i;
        i--;
    }
    return 1;
}
int main()
{
    int a, b, n;
    cin>>a>>b>>n;
    int flag=0;
    int t=n;
    while(t>0){
        if(flag==0){
            if(gcd(a, t)<=t){
                flag=1;
                t=t-gcd(a, t);
            }
            else
                break;
        }
        else{
            if(gcd(b, t)<=t){
                flag=0;
                t=t-gcd(b, t);
            }
            else
                break;
        }
    }
    if(flag==1)
        cout<<0<<endl;
    else
        cout<<1<<endl;
    return 0;
}
