#include <iostream>

using namespace std;

int main() {
	
	int a;
	cin >> a;
	int b = a / 2;
	if (a >= 1 && a <= 100) {
		if (b % 2 == 0 && a % 2 == 0) {
			cout << "YES" << endl;
		} else if (b == a - b && a % 2 == 0 && b != 1) {
			cout << "YES" << endl;	
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}