#include <iostream>
#include <string>
using namespace std;

/*
  Program : Variables and Data Types Memory Size
  Concept : cout, sizeof
*/

int main() // entry point of program execution
{
    int a;
    double b;
    char c;
    string d;
    bool e;

    cout << "========================================\n";
    cout << "   DATA TYPES MEMORY SIZE (in bytes)\n";
    cout << "========================================\n\n";

    cout << "int     : " << sizeof(a) << " bytes\n";
    cout << "double  : " << sizeof(b) << " bytes\n";
    cout << "char    : " << sizeof(c) << " bytes\n";
    cout << "string  : " << sizeof(d) << " bytes\n";
    cout << "bool    : " << sizeof(e) << " bytes\n";

    return 0;
}