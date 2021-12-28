#include <iostream>
using namespace std;
int main() {

	int sum = 0;

	while (true) {
		int num;
		cin >> num;
		if (num == 0) {
			cout << sum;
			break;
		}
		sum += num;
	}

	}