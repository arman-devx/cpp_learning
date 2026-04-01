#include <iostream> //Includes Input-Output library for cout 
using namespace std; // Allowed use cout without std::

/* Program : User name (getline) + city print 
   Concept : cout, getline, variable
*/

int main () // entry point of program execution
{
    string name, city; // Variable to store input text from user

    // Print message to console 
    cout << "Enter full name : " ;
    getline(cin, name); // Take full line input (Include spaces)
    /*
       cin >> text; // Take single word input (stops at space)
    */

    cout << "Enter Your city : " ;
    getline(cin, city);

    cout << "Hello, " << name << endl << "You live in " << city ;

    return 0; // Programe end successfully
    
}