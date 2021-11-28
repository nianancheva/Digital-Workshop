//Task One
#include <iostream>
using namespace std;

int main()
{
   /* Oh what
        a happy day!
        Oh yes,
        what a happy day!*/

    cout << "Oh what\na happy day!\nOh yes,\nwhat a happy day!";

    //The long way:
    /*
    cout << "Oh what" << endl;
    cout << "a happy day!" << endl;
    cout << "Oh yes," << endl;
    cout << "what a happy day!";
    */
  
    //return 0;
}

//Task Two
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


//Task Three
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
