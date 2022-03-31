#include <iostream>
using namespace std;

int main() {
	int two, three, five, six; cin >> two >> three >> five >> six;
    int count_of_256 = min(two, min(five, six));
    int count_of_32 = min((two - count_of_256), three);
    cout << 256 * count_of_256 + 32 * count_of_32 << endl;
	return 0;
}