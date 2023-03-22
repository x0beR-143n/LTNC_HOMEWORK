#include<iostream>
using namespace std;
struct Point{
    double x;
    double y;

};

void print(Point p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
}
int main()
{
    Point p;
    cin >> p.x >> p.y;
    print(p);
    return 0;
}
