#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a=1;
    int b=(2*n-1);
    for( int i=0;i<n; i++)
    {
        cout << setw(a);
        for( int j=0; j< b; j++)
        {
            cout << "*";
        }
        cout << endl;
        b=b-2;
        a++;
    }
    return 0;
}

