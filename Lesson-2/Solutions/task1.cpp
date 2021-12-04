#include <iostream>
using namespace std;
int main() {

	int dayAsNumber;

	cin >> dayAsNumber;

	string weekDay;

	switch (dayAsNumber) {
	case 1:
		weekDay = "Monday";
		break;

	case 2:
		weekDay = "Tuesday";
		break;

	case 3:
		weekDay = "Wednesday";
		break;

	case 4:
		weekDay = "Thursday";
		break;

	case 5:
		weekDay = "Friday";
		break;

	case 6:
		weekDay = "Saturday";
		break;

	case 7:
		weekDay = "Sunday";
		break;

	default:
		weekDay = "Invalid day!";
	}

	cout << weekDay;
}
