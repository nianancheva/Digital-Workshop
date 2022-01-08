#include <iostream>
using namespace std;

bool isEven(int a) {
	return a % 2 == 0;
}

int main() {

	//Sample code use:

	int a;

	cin >> a;

	cout << "Is Even: " << boolalpha <<isEven(a);

	}