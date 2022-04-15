/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
    	cin >> n;
    
    	for(int i = 0; i < n; ++i){
    		cout << i +1 << " ";
    	}
    	cout << endl;   
    }
    return 0;
}
