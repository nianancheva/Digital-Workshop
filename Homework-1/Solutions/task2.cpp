#include <iostream>
using namespace std;

int main() {

	long long input;

	cin >> input;

	long long number = input;

	long long p = 1;
	long long result = 0;

	while (number != 0) {
		int n = number % 10;

		if (n % 2 != 0) {
			result += n * p;
			p *= 10;
		}

		number = number / 10;
	}

	cout << result;

}