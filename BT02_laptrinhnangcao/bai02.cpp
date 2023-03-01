#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a=n;
    int b=1;
    for( int i=n; i>0; i--)
    {
        cout << setw(b);
        for( int j=0; j<a; j++)
        {
            cout << "*";
        }
        b++;
        a--;
        cout << endl;
    }
    return 0;
}
