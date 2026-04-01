#include <iostream> // Includes Input-Output library for cout
using namespace std; // Allowed use cout without std::
/*
  Program : Two number multiplication  
  Concept : cout, cin, variables or multiplication = first_number * secound_number
*/

int main () // entery point of programe execution
{
    int num1, num2, multi; // variables to store Input value for user

    // print message to console 
    cout << "Enter two numbers : \n" ;\

    cin >> num1 ; // Take input number
    cin >> num2 ;

    multi = num1 * num2 ; // Two number multiplication logic

    cout << "\nmultiplication is : " << multi ;

    return 0 ;

}