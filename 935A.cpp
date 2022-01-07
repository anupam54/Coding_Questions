#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=1;
    int count=0;
    while(temp<n){
        if((n-temp)%temp==0)
            count++;
        temp++;
    }
    cout<<count<<endl;
    return 0;
}
