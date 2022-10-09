#include<iostream>
using namespace std;
int main() {
	int input;
	int sum = 0;
	cout << "add number, negative input will end the program." << endl;

	while (true) {
		cin >> input;
		sum = sum + input;

		if (input < 0) {
			break;
			cout << "Sum is: " << sum << endl;
		}
		cout << "Sum is: " << sum << endl;
	}
}