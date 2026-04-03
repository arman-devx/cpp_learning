#include <iostream> // includes input-output library for cout
using namespace std; // allowed use cout without std::

/*
  program : celsius to fahrenheit conversion 
  concept : cout, cin, variables, fahrenheit = (9 / 5) * celsius + 32 
*/

int main () // entery point program execution 
{
    double celsius, fahrenheit ; // variable to store input and outptut 

    // print message to console
    cout << "Enter Celsius temperatures : " ; 

    // Take input value
    cin >> celsius ;

    fahrenheit =  celsius * ( 9.0 / 5) + 32 ; // conversion formula 

    cout << "temperatures in fahrenheit : " << fahrenheit ; 

    return 0 ; // program end succesfully
    
}