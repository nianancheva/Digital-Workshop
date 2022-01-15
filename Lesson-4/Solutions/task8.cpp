#include <iostream>
using namespace std;

long long pow(long long num, unsigned N) {
	long long result = 0; //unnecessary variable lol

	if (N == 0) { //unnecessary expression (N is always > 0)
		return 1;
	}

	for (int i = 1; i < N; i++) {
		result += num * num; 
	}
	return result;
}

int main() {

	//Sample code use:

	int num;
	unsigned N;

	cin >> num >> N;

	cout << N << "th power of " << num << " is: " << pow(num, N);

}
