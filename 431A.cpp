/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int res=0;
    for(char i:s){
        if(i=='1')
            res+=a;
        else if(i=='2')
            res+=b;
        else if(i=='3')
            res+=c;
        else
            res+=d;
    }
    cout<<res;
    return 0;
}
