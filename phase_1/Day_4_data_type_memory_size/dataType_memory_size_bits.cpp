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
    cout << "   DATA TYPES MEMORY SIZE (in bits)\n";
    cout << "========================================\n\n";

    cout << "int     : " << sizeof(a) * 8 << " bits\n";
    cout << "double  : " << sizeof(b) * 8 << " bits\n";
    cout << "char    : " << sizeof(c) * 8 << " bits\n";
    cout << "string  : " << sizeof(d) * 8 << " bits\n";
    cout << "bool    : " << sizeof(e) * 8<< " bits\n";

    return 0;
}