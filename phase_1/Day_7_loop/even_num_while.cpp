#include<iostream>
using namespace std;

/*
    program : even number check and print from while loop
*/

int main ()
{
    int i = 1;
    while (i <= 100)
    {
        
        if(i % 2 == 0)
        {
            cout << i << endl;
        }
        i++ ;
        
    }
}