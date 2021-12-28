#include <iostream>
using namespace std;
int main() {

	//btw not a good solution (:

	int a, b;
	cin >> a >> b;

	int n1, n2;
	if (a < b) {
		n1 = a;
		n2 = b;
	}
	else {
		n1 = b;
		n2 = a;

	}

	for (int i = n1; i <= n2; i++) {
		bool isPrime = true;
		if (i == 1) {
			isPrime = false;
			continue;
		}
		for (int j = 1; j < i; j++) {
			if ((i % j == 0) && (j != i) && (j != 1)) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			cout << i << " ";
		}
	}

	}