#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    long sum=1;
    for( int i=1; i<=y; i++)
    {
        sum=sum*x;
    }
    cout << sum << endl;
    cout << pow(x,y);
}
