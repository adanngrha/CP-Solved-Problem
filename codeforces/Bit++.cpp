#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int input, number;
	string a, b, c, d;
	a = "X++";
	b = "++X";
	c = "X--";
	d = "--X";
	cin >> input;
	
	string statements[input];
	
	for (int i = 0; i < input; i++) {
		cin >> statements[i];
		if (statements[i] == a || statements[i] == b) {
			number++;
		} else if (statements[i] == c || statements[i] == d) {
			number--;
		}
	}
	
	cout << number << endl;
	
	return 0;
}