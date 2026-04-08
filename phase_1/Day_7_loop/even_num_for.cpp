#include <iostream>
using namespace std;
/*
    program : even number check and print from while loop
*/
int main()
{
    for (int i = 1; i <= 100; i++) // loop start
    {
        if(i % 2 == 0) // check even numbers
        {
            cout << i << endl; //print only even numbers
        }
    }
    
}