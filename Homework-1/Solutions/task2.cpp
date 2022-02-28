#include <iostream>
using namespace std;

bool isNatural(long long n) {
	return n >= 1;
}

int main() {

	long long input;
	cin >> input;

	if (!isNatural(input)) {
			cout << "Error! Number must be natural!\n";
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
