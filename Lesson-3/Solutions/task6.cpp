#include <iostream>
#include <cmath> //pow

using namespace std;

const int Multiplier = 2;

int main()
{
	int number;
	cin >> number;

	if (number <= NULL)
		return NULL;//end program

	while (number > NULL)
	{
		int i = NULL;
		while (pow(Multiplier, i + 1) <= number)
			i++;

		number -= pow(Multiplier, i);

		number != NULL ? cout << Multiplier << "^" << i << " + "
			        : cout << Multiplier << "^" << i << endl;
	}
}