#include <iostream>
using namespace std;

int main()
{
long long number, sum = 0;

do
{
	cin >> number;
	sum += number;
}while(number != 0);

cout << "Sum is: " << sum << endl;
}