#include <iostream>  // includes input-output library for cpp
using namespace std; // allowed use cout without std::

/*
  program : Even and Odd numbers cheack
  logic : cout, cin, logic : if number divisible by 2 compltle so even and if not so odd
*/

int main() // entery point programe execution
{
    int num; // data type store to input number

    // print message to console
    cout << "*****************************" << endl;
    cout << "  Even and Odd number check" << endl;
    cout << "*****************************" << endl;

    cout << "Enter your number : ";
    cin >> num;

    if (cin.fail())
    {
        cout << "Error: Invalid! Please enter a number ";
    }
    else if (num % 2 == 0)
    {
        cout << "This number is even " << endl;
    }
    else
    {
        cout << "This number is odd " << endl;
    }

    return 0;
}