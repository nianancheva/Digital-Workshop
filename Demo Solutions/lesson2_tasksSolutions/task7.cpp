#include <iostream>
using namespace std;
int main() {

	int radius;
	int x, y;

	cin >> radius >> x >> y;

	string position;

	position = (radius == x || radius == y) ? "On the circle" : ((radius > x || radius > y) ? "In the circle" : "Out of the circle");

	/*
	if (radius == x || radius == y) {
		position = "On the circle";
	}
	else if (radius > x || radius > y) {
		position = "In the circle";
	}
	else {
		position = "Out of the circle";
	}
	*/

	cout << position;

}
