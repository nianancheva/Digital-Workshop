#include <iostream>
using namespace std;

void convertToBinary(int n)
{
	if (n / 2 != 0) {
		convertToBinary(n / 2);
	}
	cout << (n % 2);
}


int main() {

	//Sample code use:

	int n;
	cin >> n;

	convertToBinary(n);

}
