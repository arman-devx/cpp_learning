#include<iostream>
using namespace std; //allow use standerd name without std::
/*
  programe : school, college result grade system
  logic :
   🔍 Example:
    Marks	   Grade
    90–100	   A
    75–89	   B
    60–74	   C
    50–59	   D
    <50	       E
*/
int main () 
{
    int grade;

    cout << "*****************************" << endl ;
    cout << "       Grade System" << endl;
    cout << "*****************************" << endl ;

    cout << "1. 90-100" << endl
         << "2. 75-89" << endl
         << "3. 60-74" << endl
         << "4. 50-59" << endl
         << "5. < 50" << endl 
         << "6. Exit" << endl
         << "Enter your marks numbers blut : " ;
    cin >> grade ;

    if (cin.fail())
    {
        cout << "error: Invalid input!, try again" << endl ;
        
    } else
    
    switch (grade)
    {
    case 1 : cout << "Grade A" << endl ; break;
    case 2 : cout << "Grade B" << endl ; break;
    case 3 : cout << "Grade C" << endl ; break;
    case 4 : cout << "Grade D" << endl ; break; 
    case 5 : cout << "Grade E" << endl ; break;
    case 6 : cout << "Thanks" << endl ; break;
    
    default: cout << "error: invlaid input number, try again" << endl ;
        break;
    }
    return 0; 

}