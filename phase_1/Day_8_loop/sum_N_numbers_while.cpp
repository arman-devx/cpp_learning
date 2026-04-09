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
    int i = 1;
    while(i <= term)
    {
        N_sum += i;
        i++;
    }
    cout << "Sum of " << term << " numbers: " << N_sum << endl;

    return 0;
}