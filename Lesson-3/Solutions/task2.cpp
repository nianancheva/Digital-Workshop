#include <iostream>
using namespace std;

const int lastDivisor = 1;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	int smallerValue = num1;

	if (num1 > num2)
		smallerValue = num2;

	for (int i = smallerValue; i > 1; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
			cout << i << " ";
	}
	cout << lastDivisor;
}