#include <iostream>

int main()
{
	bool conditions[10];
	int numbers[MAX_SIZE];
	double floatingPointNumbers[] = { 1.5,2.5,3.5,4.5 }; //4 double
	int numbers2[] = { 3 + 2 ,2 * 4 }; //2 ints => 5 8

	cout << sizeof(bool) << endl; //1 byte
	cout << sizeof(conditions) << endl; //10 bytes
	cout << sizeof(numbers) << endl;//24 bytes

	cout << sizeof(numbers) / sizeof(int) << endl; // 24 / 4 = 6;
	cout << sizeof(numbers) / sizeof(numbers[0]) << endl; // 24 / 4 = 6;

	cout << sizeof(floatingPointNumbers) << endl; //32 bytes
	cout << sizeof(floatingPointNumbers) / sizeof(double) << endl; //32 / 8 = 4
}