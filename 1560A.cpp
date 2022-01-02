#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int K;
        cin>>K;
        int ans;
        int i=0;
        int temp=1;
        while(i<K){
            if(temp%10!=3 && temp%3!=0){
                i++;
                ans=temp;
            }
            temp++;
        }
        cout<<ans<<endl;
    }
    return 0;
}