#include<iostream>
using namespace std;
/*
  program : Day of week name 
  logic :
  🔍 Example: 
  1 ➡️ Sunday
  2 ➡️ Monday
  3 ➡️ Tuesday
  4 ➡️ Wednesday
  5 ➡️ Thursday
  6 ➡️ Friday
  7 ➡️ Saturday
*/

int main () 
{
    
    int day;

    cout << "************************" << endl;
    cout << "      Day of week" << endl;
    cout << "************************" << endl;

    
        cout << "Enter Day number(1-7) : ";
        cin >> day;

        if (cin.fail())
        {
            cout << "error: Invalid input, try again" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }

        switch (day)
        {
            case 1: cout << "Sunday" << endl; break;
            case 2: cout << "Monday" << endl; break;
            case 3: cout << "Tuesday" << endl; break;
            case 4: cout << "Wednesday" << endl; break;
            case 5: cout << "Thursday" << endl; break;
            case 6: cout << "Friday" << endl; break;
            case 7: cout << "Saturday" << endl; break;

            default:
                cout << "error: Invalid number, try again" << endl;
                break;
        }


    return 0;
}