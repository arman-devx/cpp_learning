#include<iostream>
using namespace std;

/*
    program : even number check and print from do-while loop
*/
int main ()
{
    int i = 1;
    do
    {
        if(i % 2 == 0) // check even number
        {
            cout << i << endl; // print only even number
        }
        i++; // update
    } while(i <= 100); // condition

    return 0;
}