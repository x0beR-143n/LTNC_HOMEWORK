#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    int n= (day+2*month + (3*(month+1))/5 + year + (year /4))%7;
    switch(n)
    {
    case 0:
        {
            cout << "Sunday";
            break;
        }
    case 1:
        {
            cout << "Monday" << endl;
            break;
        }
        case 2:
        {
            cout << "Tuesday" << endl;
            break;
        }
        case 3:
        {
            cout << "Wednesday" << endl;
            break;
        }
        case 4:
        {
            cout << "Thursday" << endl;

            break;
        }
        case 5:
        {
            cout << "Friday" << endl;
            break;
        }
        case 6:
        {
            cout << "Saturday" << endl;
            break;
        }
        default:
            {

                cout << "invalid input!";
            }
    }

    return 0;
}
