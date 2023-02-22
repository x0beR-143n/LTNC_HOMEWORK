#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    double c= (a+b)*1.0 / 2;
    while(c!= a && c!= b)
    {
        c=c+0.5;
    }
    cout << c;
}
