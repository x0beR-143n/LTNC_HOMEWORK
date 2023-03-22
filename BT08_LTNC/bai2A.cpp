#include<iostream>
using namespace std;
struct Point{
    double x;
    double y;

};
void thamtri(Point p)
{
    cout << &p << endl;
}
void thamchieu(Point &p)
{
    cout << &p << endl;
}
int main()
{
    Point p;
    cout <<"Dia chi goc cua bien Point p: " << &p << endl;
    cout << "Truyen tham chieu: ";
    thamchieu(p);
    cout << "Truyen tham tri: ";
    thamtri(p);
    return 0;
}
