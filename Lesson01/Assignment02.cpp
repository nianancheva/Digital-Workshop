#include <iostream>
using namespace std;

int main()
{
  
    /*
    Write a program that calculates the perimeter and area of a rectangle with length and width 5.4 and 7.9.
    */

    double x = 5.4;   //double x = 5.4, y = 7.9;
    double y = 7.9;

    double rectArea = x * y;
    double rectPerimeter = 2 * (x + y);

    cout << rectArea << endl<< rectPerimeter;

    //return 0;
}
