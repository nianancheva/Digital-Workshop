#include <iostream>
using namespace std;
int main() {

	int n1, n2, n3, n4, n5;

	cin >> n1 >> n2 >> n3 >> n4 >> n5;

	bool isTrion = (((n2 >= n1 && n2 >= n3) || (n2 <= n1 && n2 <= n3))
		&& ((n3 >= n2 && n3 >= n4) || (n3 <= n2 && n3 <= n4))
		&& ((n4 >= n3 && n4 >= n5) || (n4 <= n3 && n4 <= n5)));

	if (isTrion) {
		cout << "yes";
	} else {
		cout << "no";
	}
}
