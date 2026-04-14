#include<iostream>
using namespace std;
/*
    program : multiplication table any number number give user
    loop name: for loop
*/

int main ()
{
    int table ;

    cout << "Enter your table number : " ; // take integer for table print
    cin >> table;
    if(cin.fail())
    {
        cout << "error: Invalid! number, try again" << endl ;
        return 0; // program close conditin on 
    }
    cout << "Multiplication Table is : " << endl ;
    for(int i = 1; i <= 10; i++)
    {        cout << table << " X " << i << " = " << table * i << endl ; // print table
    }

    return 0;
}
