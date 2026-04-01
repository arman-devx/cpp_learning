#include <iostream> // Includes Input-Output library for cout
using namespace std; // Allowed use cout without std::
/*
  Program : Two Integers sum 
  Concept : cout, cin, variables or sum = first_number + secound_number
*/

int main () // entery point of programe execution
{
    int num1, num2, sum; // variables to store Input value for user

    // print message to console 
    cout << "Enter two numbers : \n" ;\

    cin >> num1 ; // Take input number
    cin >> num2 ;

    sum = num1 + num2 ; // Two number addtion formula 

    cout << "\nsum is : " << sum ;

    return 0 ;

}