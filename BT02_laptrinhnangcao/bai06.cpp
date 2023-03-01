#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int b=1;
    int c=2;
    for( int i=0; i<n; i++)
    {
        for( int j=0; j<n; j++)
        {
            a[i][j]=b;
            b++;
            if(b>n)
            {
                b=1;
            }
        }
        b=c;
        c++;
    }
    for( int i=0; i<n; i++)
    {
        for( int j=0; j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
