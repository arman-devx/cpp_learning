#include <iostream> //includes Input-Output library for cout
using namespace std; // Allowed use cout without std::

// Programe : Take input name and print greeting 
// Concept : cout, cin, variables

int main () // Execution Starts exectaly for main function 
{
    string name; // variableto to store input name of user
    
    // Print message to console 
    cout << "Enter your name : " ;
    cin >> name;

    cout << "Welcome, " << name << " Welcome to this program." ; //greet user by name

    return 0; //Programe end succesfully
} 