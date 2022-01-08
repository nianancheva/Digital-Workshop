#include <iostream>
using namespace std;

//prints the symbol on the same line N times without a space at the end lol
void print(char S, int N) {
	for (int i = 0; i < N; i++) {
		if (i == N - 1) {
			cout << S;
			break;
		}
		cout << S << " ";
	}
}

/*
//prints the symbol on a separate line for each iteration
void print(char S, int N) {
	for (int i = 0; i < N; i++) {
		cout << S << endl;
	}
}
*/

int main() {

	//Sample code use:

	char S;
	int N;

	cin >> S >> N;

	print(S, N);

	}