#include <iostream> // Includes Input-Output library for cout
using namespace std; // Allowed use cout without std::

// Programe : Name + age input ? formatted output 
// Concept : cout, cin, variables

int main () // entry point where program execution begins
{
    int age; // variable to store input age user
    string name; // variable to store input name user

    // Print message to console
    cout << "Name : " ;
    cin >> name;
    cout <<"Age : " ;
    cin >> age;

    cout << "Hey!, I am " << name << " ." << "I am " << age << " years old." ;
    return 0; // Code exicute succesfully

}