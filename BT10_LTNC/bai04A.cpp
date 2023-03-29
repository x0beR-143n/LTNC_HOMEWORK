#include<iostream>
using namespace std;
struct Point{
    double x;
    double y;
    Point(double x1, double y1)
    {
        x=x1;
        y=y1;
    }
};
int main()
{
    Point p(3,4);
    cout << &p << endl << &p.x << endl << &p.y;
   // &p:    0x61fe10
   // &p.x:  0x61fe10
   // &p.y:  0x61fe18
   // Nhan xet: Dia chi cua bien p va p.x la tuong dong con p.y co dia chi o nho sat lien ke dia chi o nho cua p va p.x(1 bien double 8 byte)
    return 0;
}
