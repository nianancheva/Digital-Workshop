#include <iostream>
using namespace std;

int myPow(int number, int degree) {
    int value = 1;
    for(int i = 1; i <= degree; ++i) {
        value *= number;
    }
    return value;
}

//this count how digits have the number
int findNumSize (int num) {
    int numSize = 0;
    while(num != 0) {
        num /= 10;
        ++numSize;
    }
    return numSize;
}

int main() {
    const int MIN = 1;
    const int MAX = myPow(10, 9);
    int num = 0;

    //validation
    cin >> num;
    if(num < MIN || num > MAX) {
        cout << "-1";
        return 0;
    }

    //this count how digits have the number
    int numSize = findNumSize(num);

    while(numSize >= 1){
        //find new size
        numSize = findNumSize(num);

        int first = num / myPow(10, numSize - 1) % 10;//first digit
        int last = num % 10;//last digit
        if(first < last) {
            cout << last << ' ';
        }
        else if(first > last) {
            cout << first << ' ';
        }
            //if the digits are equal
        else if(first == last && numSize != 1) {
            num = num % myPow(10,numSize - 1);
            num /= 10;
            continue;
        }
        else{
            cout << last;
        }
        //remove unnecessary digits
        num = num % myPow(10,numSize - 1);
        num /= 10;
    }
    return 0;
}
