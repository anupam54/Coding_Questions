#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A, B;
	    cin>>A>>B;
	    if(A==B)
	        cout<<0<<endl;
	    else if(A<B && abs(A-B)%2==0)
	        cout<<2<<endl;
	    else if(A<B && abs(A-B)%2!=0)
	        cout<<1<<endl;
	    else if(A>B && abs(A-B)%2==0)
	        cout<<1<<endl;
	    else if(A>B && abs(A-B)%2!=0)
	        cout<<2<<endl;
	}
	return 0;
}
