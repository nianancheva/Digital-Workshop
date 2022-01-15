#include <iostream>
using namespace std;

long long calculate(int a, int b, char action) {
	switch (action)
	{
	case '+':
		return a + b;

	case '-':
		return a - b;

	case '*':
		return a * b;

	case '/':
		return a / b;

	case '%':
		return a % b;

	default:
		return a + b;
	}
}

int main() {

	//Sample code use:

	int a, b;
	char action;

	cin >> a >> action >> b;

	cout << calculate(a, b, action);

}
