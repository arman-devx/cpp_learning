#include<iostream>
using namespace std;

int main ()
{
    int num1, num2, result, operation;

    cout << "*************************************" << endl ;
    cout << "       Simple calculator" << endl;
    cout << "*************************************" << endl ;

    cout << "1. Addition\n2. Difference\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice operation: ";
    cin >> operation;

    if (cin.fail())
    {
        cout << "error: Invalid input, try again";
        return 0;
    }

    if (operation >= 1 && operation <= 3)
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
    else if (operation == 4)
    {
        cout << "Enter dividend: ";
        cin >> num1;
        cout << "Enter divisor: ";
        cin >> num2;

        if (num2 == 0)
        {
            cout << "Divisor is Invalid!";
            return 0;
        }
    }
    else
    {
        cout << "error: Invalid operation choice";
        return 0;
    }

    switch (operation)
    {
        case 1: result = num1 + num2; break;
        case 2: result = num1 - num2; break;
        case 3: result = num1 * num2; break;
        case 4: result = num1 / num2; break;
    }

    cout << "Result is: " << result;

    return 0;
}