#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	if (num1 < 1 || num2 < 1)
	{
		cout << "Error" << endl;
		return 0; //end program
	}

	if (num1 > num2) //swap
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	//if (num1 == 1)
	//	num1++;

	for (int i = num1; i <= num2; i++)
	{
		if (i == 1)
			continue;

		bool isPrime = true;

		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			cout << i << " ";
	}
}