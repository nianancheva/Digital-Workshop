#include <iostream>
using namespace std;

bool checkSymbol(char S) {
	return (S >= 65 && S <= 90) || (S >= 97 && S <= 122);
}

bool isCapitalLetter(char S) {
	/*if (!checkSymbol(S)) {
		return false;
	}*/
	return S >= 65 && S <= 90;
}

int main() {

	//Sample code use:

	char S;

	cin >> S;

	if (!checkSymbol(S))
		cout << S << " is not a letter!";
	else
		cout << "Is Capital Letter: " << boolalpha << isCapitalLetter(S);

}