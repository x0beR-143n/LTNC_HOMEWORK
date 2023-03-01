#include<iostream>
#include<math.h>
#include<iomanip>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b=n%10;
    string lastdigit;
    switch(b)
    {
    case 1:
        {
           lastdigit = "one" ;
            break;
        }
        case 2:
        {
           lastdigit = "two" ;
            break;
        }
        case 3:
        {
            lastdigit = "three" ;
            break;
        }
        case 4:
        {
            lastdigit = "four" ;

            break;
        }
        case 5:
        {
            lastdigit = "five" ;
            break;
        }
        case 6:
        {
            lastdigit = "six" ;
            break;
        }
          case 7:
        {
           lastdigit = "seven" ;

            break;
        }
        case 8:
        {
            lastdigit = "eight";
            break;
        }
        case 9:
        {
            lastdigit = "nine";
            break;
        }
        default:
            {
            lastdigit = "";
            }
    }
    int c=n&100;
    string secondfromlastdigit;
    switch(b)
    {
        case 2:
        {
          secondfromlastdigit = "twenty" ;
            break;
        }
        case 3:
        {
            secondfromlastdigit = "thirty" ;
            break;
        }
        case 4:
        {
           secondfromlastdigit = "forty" ;

            break;
        }
        case 5:
        {
            secondfromlastdigit = "fifty" ;
            break;
        }
        case 6:
        {
           secondfromlastdigit = "sixty" ;
            break;
        }
          case 7:
        {
           secondfromlastdigit = "seventy" ;

            break;
        }
        case 8:
        {
            secondfromlastdigit = "eighty";
            break;
        }
        case 9:
        {
            secondfromlastdigit = "ninety";
            break;
        }
        default:
            {
            secondfromlastdigit = "";
            }
    }

}
