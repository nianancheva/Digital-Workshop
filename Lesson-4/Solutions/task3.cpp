#include <iostream>
using namespace std;

bool isPositive(int a) {
	return a > 0;
}

bool isNegative(int a) {
	return a < 0;
}

int main() {

	//Sample code use:

	int a;

	cin >> a;

	cout << "Is Positive: " << boolalpha << isPositive(a);
	cout << endl;
	cout << "Is Negative: " << boolalpha << isNegative(a);

	}