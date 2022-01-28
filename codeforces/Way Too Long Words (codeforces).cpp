#include <iostream>

using namespace std;
int print(string word);

int main() {
	
	int a;
	cin >> a;
	string words[a];
	for (int i = 0; i < a; i++) {
		string kata;
		cin >> kata;
		words[i] = kata;
	}
	for (int i = 0; i < a; i++) {
		print(words[i]);
	}
	return 0;
}

int print(string word) {
	int pw = word.size();
	int counter = 0;
	if (pw > 10) {
		for (int i = 0; i < pw; i++) {
			counter++;
		}
		cout << word[0] << counter - 2 << word[pw - 1] << endl;
		return 0;
	} else {
		cout << word << endl;
		return 1;
	}
}