#include <iostream> // Includes Input-Output library for cout
using namespace std; // Allowed use cout without std::
/*
  Program : Two number difference  
  Concept : cout, cin, variables or difference = first_number - secound_number
*/

int main () // entery point of programe execution
{
    int num1, num2, differ; // variables to store Input value for user

    // print message to console 
    cout << "Enter two numbers : \n" ;\

    cin >> num1 ; // Take input number
    cin >> num2 ;

    differ = num1 - num2 ; // Two number difference logic

    cout << "\ndifference is : " << differ ;

    return 0 ;

}