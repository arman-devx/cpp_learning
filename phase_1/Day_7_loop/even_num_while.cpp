#include<iostream>
using namespace std;

/*
    program : even number check and print from while loop
*/

int main ()
{
    int i = 1;
    while (i <= 100) // condition
    {
        
        if(i % 2 == 0) //check even numbers 
        {
            cout << i << endl; // print only even number
        }
        i++ ;
        
    }
    return 0;
}