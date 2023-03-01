#include <iostream>
#include<math.h>
using namespace std;
bool checkTriangle(int a, int b, int c)
{
    if(a<0 || b<0 || c<0)
    {
        return false;
    }
    if(a+b > c && a+c > b && c+b > a)
    {
        return true;
    }
    return false;
}
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(checkTriangle(a,b,c))
    {
        cout << "Chu vi: " << a+b+c << endl;
        if(a==b && b==c)
        {
        cout << "Tam giac deu";
        return 0;
        }
        if(a==b || b==c || a==c)
        {
            cout << "Tam giac can";
        }
        if(sqrt(a*a+b*b) == c || sqrt(c*c+b*b) == a|| sqrt(c*c+a*a) == b)
        {
            cout << "Tam giac vuong";
        }
    }
    else{
        cout << "Khong phai tam giac!";
    }

    return 0;
}
