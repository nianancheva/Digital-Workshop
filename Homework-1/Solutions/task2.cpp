#include <iostream>
using namespace std;

bool isNatural(double n) {
	long long natural = n;
	return n == natural;
}

int main() {

	double input;
	cin >> input;

	long long number = input;
	
	if (!isNatural(input)) {
			cout << "Number must be natural!";
			return 0;
		}

	long long multiplier = 1;
	long long result = 0;

	while (number != 0) {

		int lastDigit = number % 10;

		if (lastDigit % 2 != 0) {
			result += lastDigit * multiplier;
			multiplier *= 10;
		}

		number /= 10;
	}

	cout << result;

}
