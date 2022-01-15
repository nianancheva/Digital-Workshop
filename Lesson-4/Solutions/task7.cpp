#include <iostream>
using namespace std;

bool isInInterval(long long num, long long min, long long max) {
	return (num >= min && num <= max);
}

bool isBetween100And10000(long long num) {
	return (num >= 100 && num <= 10000);
}

int main() {

	//Sample code use:

	int num, min, max;

	cin >> num >> min >> max;

	cout << "Is between "<< min << " and " << max << ": " << boolalpha << isInInterval(num, min, max);

	cout << endl << "Is between 10 and 10000: " << boolalpha << isBetween100And10000(num);

}
