#include <iostream> // Includes Input-Output library for cout
using namespace std; // allowed use cout without std::
/*
  Program : Three numbers average
  concept : cout, cin, variables, average = additon all value divide by 3
*/

int main () // entery point of program execution 
{
    // Declare variables to store user input    
    int num1, num2, num3, all_add, average;
    
    // printing message to console
    cout << "Enter three number : \n" ;

    cin >> num1 ; // take input number
    cin >> num2 ;
    cin >> num3 ;

    // Three number average logic
    all_add = num1 + num2 + num3 ;
    average = all_add / 3 ;

    cout << "Average is : " << average ;

    return 0 ;
}