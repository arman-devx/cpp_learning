#include <iostream>
using namespace std;
/*
   program : find largest of three numbers
*/
int main () // allow use of standard library names without std::
{
    int num1, num2, num3 ;

    cout << "Enter three number : " << endl ;
    cin >> num1 ;
    cin >> num2 ;
    cin >> num3 ;
    if (cin.fail()) // cin.fail() : check if use entered invlid input (e.g., text instead of number)
    {
        cout << "Error: Invalid! input, Please enter a number" << endl ;
    } else if (num1 >= num2 && num1 >= num3)
    {
        cout << "largest number is : " << num1 << endl ;
    } else if (num2 >= num3)
    {
        cout << "largest number is : " << num2 << endl ;
    } else 
    cout << "largest number is : " << num3 << endl ;

    return 0;
    
}