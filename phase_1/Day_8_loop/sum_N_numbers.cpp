#include<iostream>
using namespace std;

/*
   Program : Sum of N numbers (1 to N)
*/

int main()
{
    int term, N_sum = 0;

    cout << "Enter N term number: ";
    cin >> term;

    // Input validation
    if(cin.fail())
    {
        cout << "Error: Invalid input, please enter a number";
        return 0;
    }

    // Negative number check (important improvement)
    if(term < 0)
    {
        cout << "Error: Please enter a positive number";
        return 0;
    }

    // Loop for sum
    for(int i = 1; i <= term; i++)
    {
        N_sum = N_sum + i;
    }

    cout << "Sum of " << term << " numbers: " << N_sum;

    return 0;
}