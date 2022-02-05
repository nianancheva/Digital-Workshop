#include <iostream>
using namespace std;

int greaterNumber(int a, int b) {
	if (a > b)
		return a;
	else 
		return b;
}

int main() {

	long long input;

	cin >> input;

	long long number = input;

	long long numL = input, numR = input;

	//--------

	long long numberOfDigits = 0;

	while (input != 0) {
		input /= 10;
		numberOfDigits++;
	}

	//--------
	
	long long pL = 1;

	for (int i = 1; i < numberOfDigits; i++) {
		pL *= 10;
	}

	for (int i = 0; i < numberOfDigits / 2; i++) {
		int nL = numL / pL;
		int nR = numR % 10;

		if (nL == nR) {
			numL = numL - nL * pL;
			numR = numR / 10;
			pL /= 10;
			continue;
		}

		if (i == numberOfDigits / 2 - 1 && numberOfDigits % 2 == 0) {
			cout << greaterNumber(nL, nR);
		}
		else { cout << greaterNumber(nL, nR)<< " "; }
		
		numL = numL - nL * pL;
		numR = numR / 10;
		pL /= 10;
		//cout << nL << " " << nR << endl;
	}

	if (numberOfDigits % 2 != 0) {
		if (numberOfDigits == 1) {
				cout << numR % 10;
		}
		else {
			cout << numR % 10;
		}
	}

	if (number == 0)
		cout << 0;

}
