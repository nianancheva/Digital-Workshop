#include <iostream>
using namespace std;
int main() {

	int hours;
	int minutes;

	int minutesToAdd = 15;

	cin >> hours >> minutes;

	int diff = 0;

	int h = (minutes + minutesToAdd) / 60;
	int m = (minutes + minutesToAdd) % 60;

	hours += h;
	minutes = m;

	if (hours >= 24) {
		hours = hours - 24;
	}

	//--------------

	if (hours < 10) {
		cout << 0 << hours;
	}
	else {
		cout << hours;
	}
	
	cout << ":";

	if (minutes < 10) {
		cout << 0 << minutes;
	}
	else {
		cout << minutes;
	}

}
