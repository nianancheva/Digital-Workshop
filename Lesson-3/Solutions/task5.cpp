#include <iostream>
using namespace std;

int main()
{
	unsigned long long number, temp = 1;
	bool isPowOfTwo = false;
	cin >> number;

	while (temp <= number)
	{
		if (temp == number)
			isPowOfTwo = true;

		temp *= 2;
	}

	cout << boolalpha << isPowOfTwo << endl;
}