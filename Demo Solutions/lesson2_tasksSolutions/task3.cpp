#include <iostream>
using namespace std;
int main() {

	double speed;

	cin >> speed;

	string result = "";

	if (speed <= 10) {
		result = "slow";
	}
	else if (speed <= 50) {
		result = "average";
	}
	else if (speed <= 150) {
		result = "fast";
	}
	else if (speed <= 1000) {
		result = "ultra fast";
	}
	else {
		result = "extremely fast";
	}

	cout << result;

}
