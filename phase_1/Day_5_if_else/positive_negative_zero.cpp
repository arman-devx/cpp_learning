#include <iostream> // includes input-output library 
using namespace std; // allows use of standard library names without std::
/*
  program : check number positive negative and zero 
  Logic: num > 0 → Positive, num == 0 → Zero, num < 0 → Negative
*/

int main() 
{
    int num ;

    cout << "Enter your number : " ;
    cin >> num ;

    if (cin.fail()) // cin.fill() : // checks if user entered invalid input (e.g., text instead of number)
    {
        cout << "Error: Invalid! input, please enter a numer" << endl ; 
    } else if (num > 0)
    {
        cout << "Positive" << endl ;
    } else if (num < 0)
    {
        cout << "Negative" << endl ;
    } else 
        cout << "Zero" << endl ;

    return 0;

}