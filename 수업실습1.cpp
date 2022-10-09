#include<iostream>
using namespace std;
int main() {

	int maxValue;
	cin >> maxValue;
	int dividedValue = 2;
	int divisor = 2;
	bool isPrime = true;

	while (dividedValue <= maxValue) {
		isPrime = true;

		while (divisor < dividedValue) {

			if (dividedValue % divisor == 0) {
				isPrime = false;
				break;
			}

			divisor++;
		}
		divisor = 2;

		if (isPrime) {
			cout << dividedValue << endl;
		}

		dividedValue++;
	}


}