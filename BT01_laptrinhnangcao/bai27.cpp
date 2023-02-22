#include <iostream>
using namespace std;
int main()
{
    int n;
    while(true)
    {
        cout << "Input your number: ";
        cin >> n;
        if(n==-1)
        {
            cout << "Bye";
            break;
        }
        if(n >0 && n%5 == 0)
        {
            cout << "Your division of 5 result: " << n/5 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
