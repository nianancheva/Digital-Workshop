#include <iostream>
using namespace std;

bool checkSymbol(char S) {
	return (S >= 'A' && S <= 'Z') || (S >= 'a' && S <= 'z');
}

bool isCapitalLetter(char S) {
	/*if (!checkSymbol(S)) {
		return false;
	}*/
	return S >= 'A' && S <= 'Z';
}

int main() {

	//Sample code use:

	char S;

	cin >> S;

	//note: when receiving more than one symbol as an input, only the first one will be checked
	//example:
	//	input: Aj/9wgc
	//	output: Is Capital Letter: true //('A' is a capital letter)

	if (!checkSymbol(S))
		cout << S << " is not a letter!";
	else
	cout << "Is Capital Letter: " << boolalpha << isCapitalLetter(S);

	}