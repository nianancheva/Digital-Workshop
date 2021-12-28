#include <iostream>
using namespace std;
int main() {

	int a, b;
	cin >> a >> b;

	int c;
	if (a >= b) {
		c = a;
	}
	else {
		c = b;
	}

	for (int i = c; i >= 1; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			cout << i<< " ";
		}
	}

	}