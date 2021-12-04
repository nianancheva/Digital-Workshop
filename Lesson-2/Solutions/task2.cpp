#include <iostream>
using namespace std;
int main() {

	int n;

	cin >> n;

	string result;

	if (n < 100) {
		result = "Less than 100";
	}
	else if (n > 200) {
		result = "Greater than 200";
	}
	else {
		result = "Between 100 and 200";
	}

	cout << result;
}
