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
    cin >> x>> y;
    if(UCLN(x,y) == 1)
    {
        cout << "yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
