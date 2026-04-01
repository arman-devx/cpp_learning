#include <iostream> // Inlucde Input-Output library for cout
using namespace std; //Allowed use cout without std::

// Programe : 2 numbers input ? print both of 
// Concept : cout, cin, variable

int main () // Enter point where code execution begins
{
    int num1, num2; // variable to store input numbers user

    // Print message to console
    cout << "First number : " ;
    cin >> num1 ;
    cout << "Secound number : " ;
    cin >> num2 ;

    cout << "You entered : " << num1 << " and " << num2 ;

    return 0; // code execution succesfully
    
    
}