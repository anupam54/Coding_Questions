#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n, m; cin >> n >> m;
 
		if (n > m)
			swap(n, m);
 
		if (n == 1 || (n == 2 && m == 2))
			cout << "YES\n";
 
		else
			cout << "NO\n";   
    }
    return 0;
}
