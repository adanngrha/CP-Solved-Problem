#include <iostream> 

using namespace std;

int main() {

	int problems;
	cin >> problems;
	int jumlahSatu[problems];
	for (int i = 0; i < problems; i++) {
		int satu = 0;
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1) {
			satu++;
		}
		if (b == 1) {
			satu++;
		}
		if (c == 1) {
			satu++;
		}
		
		if (satu > 1) {
			jumlahSatu[i] = 1;
		} else {
			jumlahSatu[i] = 0;
		}
	}
	
	int counter = 0;
	for (int i = 0; i < problems; i++) {
		if (jumlahSatu[i] == 1) {
			counter++;
		}
	}
	
	cout << counter << endl;
	
	return 0;	
}

