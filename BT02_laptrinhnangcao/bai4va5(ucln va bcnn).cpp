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
int BCNN(int a, int b)
{
    if(a<b)
    {
        swap(a,b);
    }
    for(int i=a; i<=a*b; i=i+a)
    {
        if(i%a==0 && i%b==0)
        {
            return i;
        }
    }
}
int main()
{
    int x,y;
    cin >> x>> y;
    cout << "Uoc chung lon nhat: " << UCLN(x,y) << endl;
    cout << "Boi chung nho nhat: " << BCNN(x,y) << endl;
    return 0;
}
