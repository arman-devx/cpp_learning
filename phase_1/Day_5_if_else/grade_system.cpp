#include <iostream>
using namespace std;
/*
  programe : school, college result grade system
  logic :
   🔍 Example:
    Marks	   Grade
    90–100	   A
    75–89	   B
    60–74	   C
    50–59	   D
    <50	       E
*/

int main()
{
    int result;

    cout << "Enter your result marks(1 to 100) : ";
    cin >> result;

    if (cin.fail()) // cin.fail() : check if user entered invalid input (e.g., text instead of number)
    {
        cout << "Error: Invalid! number, please enter a number" << endl;
    }
    else if (result <= 100 && result >= 90)
    {
        cout << "Grade is : A" << endl;
    }
    else if (result <= 89 && result >= 75)
    {
        cout << "Grade is : B" << endl;
    }
    else if (result <= 74 && result >= 60)
    {
        cout << "Grade is : C" << endl;
    }
    else if (result <= 59 && result >= 50)
    {
        cout << "Grade is : D" << endl;
    }
    else if (result < 50 && result >= 0)
    {
        cout << "Grade is : E" << endl;
    }
    else
    {
        cout << "Error: you entered invalid! number" << endl;
    }

    return 0;
}