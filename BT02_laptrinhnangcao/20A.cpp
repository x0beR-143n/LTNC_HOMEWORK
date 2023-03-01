#include <iostream>
using namespace std;
int main()
{
    int hours;
    cin >> hours;
    if(hours <= 100)
    {
       cout << hours * 12000;
    }
    int firstoverworking = 100 * 12000;
    int secondoverworking = firstoverworking+ 50*16000;
    int thirdoverworking = secondoverworking + 50*20000;
    if(hours >100 && hours <= 150)
    {
        cout << (hours-100) * 16000 + firstoverworking;
    }
    if(hours > 150 && hours <= 200)
    {
        cout << (hours-150)*20000+secondoverworking;
    }
    if(hours > 200)
    {
        cout << thirdoverworking + (hours - 200)*25000;
    }
    return 0;
}
