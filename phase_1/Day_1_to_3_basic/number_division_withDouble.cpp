#include <iostream> // includes input-output library for cout
using namespace std; // allowed use cout without std::

// program : 2 numbers ? division (double use)
// concept : cout, cin, double, division = divident / divisor 

int main () // entery point programe 
{
    double division, divident, divisor; // variable to store input number 

    cout << "Enter divident : ";
    cin >> divident ;
    cout << "Enter divident : ";
    cin >> divisor ;

    division = divident / divisor ;

    cout << "division is : " << division ;

}