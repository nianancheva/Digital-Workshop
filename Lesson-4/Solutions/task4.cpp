#include <iostream>
using namespace std;

int abs(int a) {
	if (a < 0) {
		return -a;
	}
	return a;
}

double fabs(double a) {
	if (a < 0) {
		return -a;
	}
	return a;
}

int main() {

	//Sample code use:

	int a;

	cin >> a;

	cout << "Absolute value (int): " << abs(a);

	/*
	
	//or:
	double a;

	cin >> a;

	cout << "Absolute value (double): " << fabs(a);

	*/

	}