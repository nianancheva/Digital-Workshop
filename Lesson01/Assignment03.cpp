#include <iostream>
using namespace std;

int main()
{
  
    /*
    Write a program that calculates the perimeter and face of a rectangle, 
    in which you receive the length and the width of the rectangle as user input. 
    Use cin and cout.
    */

    double x;   ////double x, y;
    double y;

    cin >> x;
    cin >> y;

    double rectArea = x * y;
    double rectPerimeter = 2 * (x + y);

    cout << rectArea << endl<< rectPerimeter;

    //return 0;
}
