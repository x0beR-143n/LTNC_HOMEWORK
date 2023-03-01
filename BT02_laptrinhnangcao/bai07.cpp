#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int x,n;
    do
    {
        cin >> x;
        if(x==0)
        {
            cout << x << " ";
            continue;
        }
        if(n==x)
        {
            continue;
        }
        n=x;
        cout << x << " ";
    }
    while(x>=0);
    return 0;
}
