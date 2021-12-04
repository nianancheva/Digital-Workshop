#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	string figureType = "";

	cin >> figureType;

	double area = 0;

	if (figureType == "s") {
		double aS;
		cin >> aS;
		area = aS * aS;
	}
	else if (figureType == "r") {
		double aR;
		double bR;
		cin >> aR >> bR;
		area = aR * bR;
	}
	else if (figureType == "c") {
		double r;
		cin >> r;
		area = r * r * M_PI;
	}
	else {
		double aT;
		double hA;
		cin >> aT >> hA;
		area = aT * hA / 2;
	}

	cout << fixed << setprecision(3) << area;
}
