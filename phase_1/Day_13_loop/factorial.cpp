#include<iostream>
using namespace std;

int main ()
{
    int n;
    long long result = 1;

    cout << "**********************************" << endl;
    cout << "       Factorial problem" << endl;
    cout << "**********************************" << endl;

    cout << "Enter n number for factorial : ";
    cin >> n;

    if(cin.fail())
    {
        cout << "error: Invalid! number, try again" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return 0;
    }

    if(n < 0)
    {
        cout << "Factorial not defined for negative numbers" << endl;
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            result = result * i;
        }
        cout << endl << "Factorial of n is : " << result << endl;
    }

    return 0;
}