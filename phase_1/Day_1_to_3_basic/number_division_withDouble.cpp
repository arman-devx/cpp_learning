#include <iostream> // includes input-output library for cout
using namespace std; // allows use of cout without std::

// program : 2 numbers → division (double use)
// concept : cout, cin, double, division = dividend / divisor 

int main () // entry point of program
{
    double division, dividend, divisor; // variables to store input numbers 

    cout << "Enter dividend : ";
    cin >> dividend;
    
    cout << "Enter divisor : ";
    cin >> divisor;

    division = dividend / divisor;

    cout << "Division is : " << division;

    return 0 ;
}