#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    double s =  (a + b + c)*1.0 / 2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << area;
}
