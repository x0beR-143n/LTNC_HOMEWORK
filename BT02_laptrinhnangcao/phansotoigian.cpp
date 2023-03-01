#include <iostream>
#include<math.h>
using namespace std;
int UCLN(int a, int b)
{
    for(int i=a; i>=1; i--)
    {
        if(b%i==0 && a%i==0)
        {
            return i;
        }
    }
}
int main()
{
    int x,y;
    cin >> x >> y;
    int c=UCLN(x,y);
    cout << x/c << "/" << y/c;
    return 0;
}
