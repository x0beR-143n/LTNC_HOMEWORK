#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for( int i=1; i<=5; i++)
    {
        for( int j=0; j<i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
